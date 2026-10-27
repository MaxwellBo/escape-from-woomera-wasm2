// Runtime for the decompiled DLLs: relocate the PE image and answer Win32 imports.
#include "ghidra_compat.hpp"
#undef GiveFnptrsToDll
#undef Initialize

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#ifndef GHIDRA_SIDE
#define GHIDRA_SIDE "mod"
#endif

extern "C" const uint32_t ghidra_relocs[];
extern "C" const uint32_t ghidra_reloc_count;

struct VaFn {
	uint32_t va;
	void *fn;
};

static VaFn g_regs[16384];
static uint32_t g_nregs;
static int g_relocated;

void ghidra_register(uint32_t va, void *fn) {
	if (g_nregs < (uint32_t)(sizeof g_regs / sizeof g_regs[0]))
		g_regs[g_nregs++] = VaFn{va, fn};
}

struct FnRet {
	uint32_t fn;
	uint8_t ret;
};
static FnRet g_fnret[16384];
static uint32_t g_nfnret;
static int g_fnret_ready;

void ghidra_note_fn(void *fn, int ret) {
	if (fn == nullptr)
		return;
	if (g_nfnret < (uint32_t)(sizeof g_fnret / sizeof g_fnret[0]))
		g_fnret[g_nfnret++] = FnRet{(uint32_t)(uintptr_t)fn, (uint8_t)ret};
	g_fnret_ready = 0;
}

static void sort_fnret() {
	if (g_fnret_ready)
		return;
	std::sort(g_fnret, g_fnret + g_nfnret, [](const FnRet &a, const FnRet &b) {
		return a.fn < b.fn;
	});
	g_fnret_ready = 1;
}

void ghidra_relocate() {
	if (g_relocated || g_nregs == 0)
		return;
	g_relocated = 1;
	std::sort(g_regs, g_regs + g_nregs, [](const VaFn &a, const VaFn &b) {
		return a.va < b.va;
	});
	uint32_t patched = 0;
	for (uint32_t i = 0; i < ghidra_reloc_count; i++) {
		uint32_t rva = ghidra_relocs[i];
		if (rva + 4 > ghidra_image_size)
			continue;
		uint32_t value = 0;
		std::memcpy(&value, ghidra_image + rva, 4);
		auto found = std::lower_bound(g_regs, g_regs + g_nregs, value,
			[](const VaFn &e, uint32_t va) { return e.va < va; });
		uint32_t bits = 0;
		if (found != g_regs + g_nregs && found->va == value)
			bits = (uint32_t)(uintptr_t)found->fn;
		else if (value >= 0x10000000u && value - 0x10000000u < ghidra_image_size)
			bits = (uint32_t)(uintptr_t)(ghidra_image + (value - 0x10000000u));
		else
			continue;
		std::memcpy(ghidra_image + rva, &bits, 4);
		patched++;
	}
	sort_fnret();
	std::fprintf(stderr, "efw decompiled %s: %u functions, %u relocs patched\n",
		GHIDRA_SIDE, g_nregs, patched);
}

__attribute__((constructor(200))) static void ghidra_relocate_ctor() {
	ghidra_relocate();
}

// Return class of each enginefuncs_t / cl_enginefunc_t slot the DLL copies.
// i = i32 or pointer, f = f32, v = void, x = not a function.
static const char kServerEng[] =
	"iiviivvvvfvvvviiiiivviviviiivvvvvivvivvvvvvviivvvvvvvvvvvfivvvvvvv"
	"iiiiiiiivivvvivviiivvvviifvfvivvivvvviviiivviviiviiiviviiviiivvvii"
	"ivvvivvvvii";
static const char kClientEng[] =
	"iiiivvvvvvivivifiiiiivvvviiivvvviivviviivvvviifivviiiifvviiiiiivi"
	"vifiviiiiivviviivxxxxxxiiviiviiii";

static_assert(sizeof kServerEng == 144, "enginefuncs_t return classes");
static_assert(sizeof kClientEng == 99, "cl_enginefunc_t return classes");
static_assert((int)GhidraRet::I32 == 0 && (int)GhidraRet::F32 == 1 && (int)GhidraRet::VOID == 2, "note codes");

struct EngRet {
	uint32_t fn;
	GhidraRet ret;
};
static EngRet g_eng[256];
static int g_neng;

static void note_engine(const uint32_t *table, int n, const char *kinds) {
	g_neng = 0;
	for (int i = 0; i < n && kinds[i]; i++) {
		if (kinds[i] == 'x' || table[i] == 0)
			continue;
		GhidraRet ret = GhidraRet::I32;
		if (kinds[i] == 'f')
			ret = GhidraRet::F32;
		else if (kinds[i] == 'v')
			ret = GhidraRet::VOID;
		if (g_neng < (int)(sizeof g_eng / sizeof g_eng[0]))
			g_eng[g_neng++] = EngRet{table[i], ret};
	}
}

GhidraRet ghidra_engine_ret(uintptr_t fn) {
	uint32_t f = (uint32_t)fn;
	for (int i = 0; i < g_neng; i++)
		if (g_eng[i].fn == f)
			return g_eng[i].ret;
	sort_fnret();
	auto found = std::lower_bound(g_fnret, g_fnret + g_nfnret, f,
		[](const FnRet &e, uint32_t key) { return e.fn < key; });
	if (found != g_fnret + g_nfnret && found->fn == f)
		return (GhidraRet)found->ret;
	return GhidraRet::I32;
}

#ifdef GHIDRA_SERVER
extern "C" void GiveFnptrsToDll_impl(uint32_t *table, uint32_t globals);
extern "C" void GiveFnptrsToDll(uint32_t *table, uint32_t globals) {
	note_engine(table, 143, kServerEng);
	GiveFnptrsToDll_impl(table, globals);
}
#endif

#ifdef GHIDRA_CLIENT
extern "C" uint32_t Initialize_impl(uint32_t *table, int version);
extern "C" uint32_t Initialize(uint32_t *table, int version) {
	note_engine(table, 98, kClientEng);
	return Initialize_impl(table, version);
}
#endif

static int g_last_error;
static uintptr_t g_tls[64];
static uint64_t g_tls_used;
static FILE *g_files[16];
static int g_nfiles;
static int g_logged;
static char g_seen[24][48];

static bool live(uintptr_t p) { return p > 0x1000u; }

static FILE *as_file(uintptr_t h) {
	for (int i = 0; i < g_nfiles; i++)
		if ((uintptr_t)g_files[i] == h)
			return g_files[i];
	return nullptr;
}

static void log_unknown(const char *name) {
	if (g_logged >= 24)
		return;
	for (int i = 0; i < g_logged; i++)
		if (!std::strcmp(g_seen[i], name))
			return;
	std::snprintf(g_seen[g_logged], sizeof g_seen[0], "%s", name);
	std::fprintf(stderr, "efw import %s\n", name);
	g_logged++;
}

static uintptr_t imp_heapalloc(int c, uintptr_t *a) {
	uint32_t flags = c > 1 ? (uint32_t)a[1] : 0;
	uint32_t size = c > 2 ? (uint32_t)a[2] : 1;
	if (size == 0)
		size = 1;
	if (flags & 8u)
		return (uintptr_t)std::calloc(1, size);
	void *p = std::malloc(size);
	return (uintptr_t)p;
}

static uintptr_t imp_heapfree(int c, uintptr_t *a) {
	if (c > 2 && live(a[2]))
		std::free((void *)a[2]);
	return 1;
}

static uintptr_t imp_heaprealloc(int c, uintptr_t *a) {
	if (c < 4)
		return 0;
	uint32_t size = (uint32_t)a[3];
	if (size == 0)
		size = 1;
	void *p = live(a[2]) ? (void *)a[2] : nullptr;
	return (uintptr_t)std::realloc(p, size);
}

static uintptr_t imp_heapcreate(int, uintptr_t *) { return 1; }
static uintptr_t imp_heapdestroy(int, uintptr_t *) { return 1; }
static uintptr_t imp_heapsize(int, uintptr_t *) { return 0; }
static uintptr_t imp_getprocessheap(int, uintptr_t *) { return 1; }

static uintptr_t imp_virtualalloc(int c, uintptr_t *a) {
	uint32_t size = c > 1 ? (uint32_t)a[1] : 1;
	if (size == 0)
		size = 1;
	return (uintptr_t)std::calloc(1, size);
}

static uintptr_t imp_virtualfree(int c, uintptr_t *a) {
	if (c > 2 && a[2] == 0x8000u && live(a[0]))
		std::free((void *)a[0]);
	return 1;
}

static uintptr_t imp_tick(int, uintptr_t *) {
	struct timespec ts;
	if (clock_gettime(CLOCK_MONOTONIC, &ts) != 0)
		return 0;
	return (uintptr_t)(uint32_t)(ts.tv_sec * 1000 + ts.tv_nsec / 1000000);
}

static uintptr_t imp_interlocked_inc(int c, uintptr_t *a) {
	if (c < 1 || !live(a[0]))
		return 0;
	return (uintptr_t)++*(int32_t *)a[0];
}

static uintptr_t imp_interlocked_dec(int c, uintptr_t *a) {
	if (c < 1 || !live(a[0]))
		return 0;
	return (uintptr_t)--*(int32_t *)a[0];
}

static uintptr_t imp_interlocked_xchg(int c, uintptr_t *a) {
	if (c < 2 || !live(a[0]))
		return 0;
	int32_t *p = (int32_t *)a[0];
	int32_t old = *p;
	*p = (int32_t)a[1];
	return (uintptr_t)old;
}

static uintptr_t imp_interlocked_cmp(int c, uintptr_t *a) {
	if (c < 3 || !live(a[0]))
		return 0;
	int32_t *p = (int32_t *)a[0];
	int32_t old = *p;
	if (old == (int32_t)a[2])
		*p = (int32_t)a[1];
	return (uintptr_t)old;
}

static uintptr_t imp_tlsalloc(int, uintptr_t *) {
	for (int i = 0; i < 64; i++) {
		if ((g_tls_used & (1ull << i)) == 0) {
			g_tls_used |= 1ull << i;
			g_tls[i] = 0;
			return (uintptr_t)i;
		}
	}
	return (uintptr_t)-1;
}

static uintptr_t imp_tlsfree(int c, uintptr_t *a) {
	if (c > 0 && a[0] < 64)
		g_tls_used &= ~(1ull << a[0]);
	return 1;
}

static uintptr_t imp_tlsget(int c, uintptr_t *a) {
	if (c > 0 && a[0] < 64)
		return g_tls[a[0]];
	return 0;
}

static uintptr_t imp_tlsset(int c, uintptr_t *a) {
	if (c > 1 && a[0] < 64)
		g_tls[a[0]] = a[1];
	return 1;
}

static uintptr_t imp_ok(int, uintptr_t *) { return 1; }
static uintptr_t imp_zero(int, uintptr_t *) { return 0; }
static uintptr_t imp_handle(int, uintptr_t *) { return (uintptr_t)-1; }
static uintptr_t imp_one(int, uintptr_t *) { return 1; }

static uintptr_t imp_lasterror(int, uintptr_t *) { return (uintptr_t)g_last_error; }
static uintptr_t imp_seterror(int c, uintptr_t *a) {
	g_last_error = c > 0 ? (int)a[0] : 0;
	return 0;
}

static uintptr_t imp_debug(int c, uintptr_t *a) {
	if (c > 0 && live(a[0]))
		std::fputs((const char *)a[0], stderr);
	return 0;
}

static uintptr_t imp_writefile(int c, uintptr_t *a) {
	if (c < 4)
		return 0;
	uint32_t n = (uint32_t)a[2];
	FILE *fp = as_file(a[0]);
	size_t got = 0;
	if (fp && live(a[1]))
		got = std::fwrite((void *)a[1], 1, n, fp);
	else
		got = n;
	if (live(a[3]))
		*(uint32_t *)a[3] = (uint32_t)got;
	return 1;
}

static uintptr_t imp_readfile(int c, uintptr_t *a) {
	if (c < 4)
		return 0;
	FILE *fp = as_file(a[0]);
	size_t got = 0;
	if (fp && live(a[1]))
		got = std::fread((void *)a[1], 1, (uint32_t)a[2], fp);
	if (live(a[3]))
		*(uint32_t *)a[3] = (uint32_t)got;
	return fp ? 1 : 0;
}

static uintptr_t imp_createfile(int c, uintptr_t *a) {
	if (c < 1 || !live(a[0]))
		return (uintptr_t)-1;
	if (g_nfiles >= 16)
		return (uintptr_t)-1;
	FILE *fp = std::fopen((const char *)a[0], "rb+");
	if (!fp)
		fp = std::fopen((const char *)a[0], "wb+");
	if (!fp)
		return (uintptr_t)-1;
	g_files[g_nfiles++] = fp;
	return (uintptr_t)fp;
}

static uintptr_t imp_close(int c, uintptr_t *a) {
	if (c < 1)
		return 0;
	FILE *fp = as_file(a[0]);
	if (!fp)
		return 1;
	std::fclose(fp);
	for (int i = 0; i < g_nfiles; i++) {
		if (g_files[i] == fp) {
			g_files[i] = g_files[g_nfiles - 1];
			g_nfiles--;
			break;
		}
	}
	return 1;
}

static uintptr_t imp_setfilepointer(int c, uintptr_t *a) {
	FILE *fp = c > 0 ? as_file(a[0]) : nullptr;
	if (!fp)
		return 0;
	int whence = c > 3 ? (int)a[3] : 0;
	long off = c > 1 ? (long)(int32_t)a[1] : 0;
	if (std::fseek(fp, off, whence == 2 ? SEEK_END : whence == 1 ? SEEK_CUR : SEEK_SET) != 0)
		return (uintptr_t)-1;
	return (uintptr_t)std::ftell(fp);
}

static uintptr_t imp_mb2wc(int c, uintptr_t *a) {
	if (c < 6)
		return 0;
	const char *src = live(a[2]) ? (const char *)a[2] : "";
	int cb = (int)a[3];
	if (cb < 0)
		cb = (int)std::strlen(src) + 1;
	uint16_t *dst = live(a[4]) ? (uint16_t *)a[4] : nullptr;
	int cch = (int)a[5];
	if (!dst)
		return (uintptr_t)cb;
	int n = cb < cch ? cb : cch;
	for (int i = 0; i < n; i++)
		dst[i] = (unsigned char)src[i];
	return (uintptr_t)n;
}

static uintptr_t imp_wc2mb(int c, uintptr_t *a) {
	if (c < 6)
		return 0;
	const uint16_t *src = live(a[2]) ? (const uint16_t *)a[2] : nullptr;
	int cch = (int)a[3];
	char *dst = live(a[4]) ? (char *)a[4] : nullptr;
	int cb = (int)a[5];
	if (cch < 0 && src) {
		cch = 0;
		while (src[cch])
			cch++;
		cch++;
	}
	if (!dst)
		return (uintptr_t)cch;
	int n = cch < cb ? cch : cb;
	for (int i = 0; i < n; i++)
		dst[i] = src ? (char)(src[i] & 0xff) : 0;
	return (uintptr_t)n;
}

static uintptr_t imp_cmdline(int, uintptr_t *) {
	static char line[] = "efw";
	return (uintptr_t)line;
}

static uintptr_t imp_modfile(int c, uintptr_t *a) {
	const char *path = "efw.dll";
	if (c > 1 && live(a[1]) && a[2]) {
		std::snprintf((char *)a[1], (size_t)a[2], "%s", path);
		return (uintptr_t)std::strlen(path);
	}
	return 0;
}

static uintptr_t imp_version(int, uintptr_t *) { return 0x00000105u; }

static uintptr_t imp_versionex(int c, uintptr_t *a) {
	if (c < 1 || !live(a[0]))
		return 0;
	uint32_t *p = (uint32_t *)a[0];
	p[1] = 5;
	p[2] = 1;
	p[3] = 2600;
	p[4] = 2;
	return 1;
}

static uintptr_t imp_systime(int c, uintptr_t *a) {
	if (c < 1 || !live(a[0]))
		return 0;
	std::time_t now = std::time(nullptr);
	std::tm t;
	gmtime_r(&now, &t);
	uint16_t *s = (uint16_t *)a[0];
	s[0] = (uint16_t)(t.tm_year + 1900);
	s[1] = (uint16_t)(t.tm_mon + 1);
	s[2] = (uint16_t)t.tm_wday;
	s[3] = (uint16_t)t.tm_mday;
	s[4] = (uint16_t)t.tm_hour;
	s[5] = (uint16_t)t.tm_min;
	s[6] = (uint16_t)t.tm_sec;
	s[7] = 0;
	return 0;
}

static uintptr_t imp_compare(int c, uintptr_t *a) {
	if (c < 6 || !live(a[2]) || !live(a[4]))
		return 0;
	int n = std::strcmp((const char *)a[2], (const char *)a[4]);
	return (uintptr_t)(n < 0 ? 1 : n > 0 ? 3 : 2);
}

static uintptr_t imp_isbad(int c, uintptr_t *a) {
	return (c > 0 && live(a[0])) ? 0 : 1;
}

static uintptr_t imp_acp(int, uintptr_t *) { return 1252; }
static uintptr_t imp_filetype(int, uintptr_t *) { return 2; }
static uintptr_t imp_threadid(int, uintptr_t *) { return 1; }

static uintptr_t imp_exit(int c, uintptr_t *a) {
	std::fprintf(stderr, "efw ExitProcess %u\n", c > 0 ? (unsigned)a[0] : 0);
	return 0;
}

static uintptr_t imp_raise(int c, uintptr_t *a) {
	std::fprintf(stderr, "efw RaiseException %08x\n", c > 0 ? (unsigned)a[0] : 0);
	return 0;
}

struct Imp {
	const char *name;
	uintptr_t (*fn)(int, uintptr_t *);
};

static Imp g_imps[] = {
	{"CloseHandle", imp_close},
	{"CompareStringA", imp_compare},
	{"CompareStringW", imp_compare},
	{"CreateFileA", imp_createfile},
	{"DeleteCriticalSection", imp_ok},
	{"EnterCriticalSection", imp_ok},
	{"ExitProcess", imp_exit},
	{"FlushFileBuffers", imp_ok},
	{"GetACP", imp_acp},
	{"GetAsyncKeyState", imp_zero},
	{"GetCommandLineA", imp_cmdline},
	{"GetCurrentProcess", imp_handle},
	{"GetCurrentProcessId", imp_threadid},
	{"GetCurrentThread", imp_handle},
	{"GetCurrentThreadId", imp_threadid},
	{"GetCursorPos", imp_ok},
	{"GetFileType", imp_filetype},
	{"GetLastError", imp_lasterror},
	{"GetLocalTime", imp_systime},
	{"GetModuleFileNameA", imp_modfile},
	{"GetModuleHandleA", imp_one},
	{"GetOEMCP", imp_acp},
	{"GetProcessHeap", imp_getprocessheap},
	{"GetStdHandle", imp_one},
	{"GetSystemTime", imp_systime},
	{"GetTickCount", imp_tick},
	{"GetVersion", imp_version},
	{"GetVersionExA", imp_versionex},
	{"HeapAlloc", imp_heapalloc},
	{"HeapCreate", imp_heapcreate},
	{"HeapDestroy", imp_heapdestroy},
	{"HeapFree", imp_heapfree},
	{"HeapReAlloc", imp_heaprealloc},
	{"HeapSize", imp_heapsize},
	{"InitializeCriticalSection", imp_ok},
	{"InitializeCriticalSectionAndSpinCount", imp_ok},
	{"InterlockedCompareExchange", imp_interlocked_cmp},
	{"InterlockedDecrement", imp_interlocked_dec},
	{"InterlockedExchange", imp_interlocked_xchg},
	{"InterlockedIncrement", imp_interlocked_inc},
	{"IsBadCodePtr", imp_isbad},
	{"IsBadReadPtr", imp_isbad},
	{"IsBadWritePtr", imp_isbad},
	{"LeaveCriticalSection", imp_ok},
	{"LoadLibraryA", imp_zero},
	{"MultiByteToWideChar", imp_mb2wc},
	{"OutputDebugStringA", imp_debug},
	{"RaiseException", imp_raise},
	{"ReadFile", imp_readfile},
	{"SetConsoleCtrlHandler", imp_ok},
	{"SetCursorPos", imp_ok},
	{"SetEndOfFile", imp_ok},
	{"SetFilePointer", imp_setfilepointer},
	{"SetHandleCount", imp_ok},
	{"SetLastError", imp_seterror},
	{"SetStdHandle", imp_ok},
	{"SetUnhandledExceptionFilter", imp_zero},
	{"Sleep", imp_zero},
	{"TerminateProcess", imp_exit},
	{"TlsAlloc", imp_tlsalloc},
	{"TlsFree", imp_tlsfree},
	{"TlsGetValue", imp_tlsget},
	{"TlsSetValue", imp_tlsset},
	{"VirtualAlloc", imp_virtualalloc},
	{"VirtualFree", imp_virtualfree},
	{"WideCharToMultiByte", imp_wc2mb},
	{"WriteFile", imp_writefile},
};

static int impcmp(const void *key, const void *elem) {
	return std::strcmp((const char *)key, ((const Imp *)elem)->name);
}

static int impsort(const void *a, const void *b) {
	return std::strcmp(((const Imp *)a)->name, ((const Imp *)b)->name);
}

static int g_imps_ready;

uintptr_t efw_imp_dispatch(const char *name, int argc, uintptr_t *args) {
	if (!g_imps_ready) {
		std::qsort(g_imps, sizeof g_imps / sizeof g_imps[0], sizeof g_imps[0], impsort);
		g_imps_ready = 1;
	}
	Imp *found = (Imp *)std::bsearch(name, g_imps, sizeof g_imps / sizeof g_imps[0], sizeof g_imps[0], impcmp);
	if (!found) {
		log_unknown(name ? name : "?");
		return 0;
	}
	return found->fn(argc, args);
}
