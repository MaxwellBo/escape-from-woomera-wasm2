#pragma once
// Types and intrinsics for Ghidra 12.1.4 decompiler output.
// Data symbols are views onto the original DLL image.

#include <cstddef>
#include <cstdint>
#include <cstring>
#include <cmath>
#include <type_traits>

using undefined = unsigned char;
using undefined1 = unsigned char;
using undefined2 = unsigned short;
using undefined3 = unsigned int;
using undefined4 = unsigned int;
using undefined5 = unsigned long long;
using undefined6 = unsigned long long;
using undefined8 = unsigned long long;
using byte = unsigned char;
using uint = unsigned int;
using ushort = unsigned short;
using ulong = unsigned long;
using ulonglong = unsigned long long;
using longlong = long long;
using dword = unsigned int;
using word = unsigned short;
using qword = unsigned long long;
using float10 = long double;
using CHAR = char;
using WCHAR = unsigned short;
using BYTE = unsigned char;
using WORD = unsigned short;

struct Call;
struct GhidraCell;

template <class F, class... A>
uintptr_t ghidra_invoke(F fn, A&&... a);

// Listings spell a function pointer `code *`. The compiler rewrites that to
// CodePtr so the pointer value itself is what gets called.
struct CodePtr {
	uintptr_t fn;
	CodePtr() : fn(0) {}
	// One constructor for every integer width. wasm32's long and int are the
	// same size but distinct types, and uintptr_t is unsigned long.
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	CodePtr(T f) : fn((uintptr_t)(uint32_t)f) {}
	CodePtr(void *p) : fn((uintptr_t)p) {}
	template <class R, class... A>
	CodePtr(R (*p)(A...)) : fn((uintptr_t)p) {}
	CodePtr(const Call &c);
	CodePtr(const GhidraCell &c);
	template <class R, class... A>
	CodePtr &operator=(R (*p)(A...)) { fn = (uintptr_t)p; return *this; }
	template <class R, class... A>
	bool operator==(R (*p)(A...)) const { return fn == (uintptr_t)p; }
	template <class R, class... A>
	bool operator!=(R (*p)(A...)) const { return fn != (uintptr_t)p; }
	template <class... A>
	uintptr_t operator()(A&&... a) const {
		return ghidra_invoke(fn, static_cast<A&&>(a)...);
	}
	const CodePtr &operator*() const { return *this; }
	explicit operator int() const { return (int)fn; }
	operator void *() const { return (void *)fn; }
};
using code = CodePtr;

// wasm return class of an engine function pointer. Recovered calls always
// look like they return an integer; the engine function may return float or void.
enum class GhidraRet : uint8_t { I32, F32, VOID };
#ifdef GHIDRA_WASM
GhidraRet ghidra_engine_ret(uintptr_t fn);
// Fixed arguments before the ellipsis. 0 means the pointer is not variadic.
int ghidra_engine_fixed(uintptr_t fn);
// One recovered argument, already promoted the way Emscripten's va_list wants.
// kind 0 is a 4-byte integer or pointer. kind 1 is an 8-byte double.
struct GhidraVa {
	uint32_t lo;
	uint32_t hi;
	uint8_t kind;
};
uintptr_t ghidra_call_vararg(void *fn, int ret, int fixed, const GhidraVa *pieces, int n);
#else
inline GhidraRet ghidra_engine_ret(uintptr_t) { return GhidraRet::I32; }
#endif

// Defined after SCell. A string symbol has to decay to its address before the
// argument is copied; copying the one-byte cell passes that byte as the pointer.

// The engine dlsyms these names. The recovered bodies keep the _impl names.
#ifdef GHIDRA_WASM
#define GiveFnptrsToDll GiveFnptrsToDll_impl
#define Initialize Initialize_impl
#endif

#define __cdecl
#define __fastcall
#define __thiscall
#define __stdcall

struct ghidra_arr10 {
	unsigned char b[10];
	ghidra_arr10() { std::memset(b, 0, sizeof b); }
	ghidra_arr10(long double x) {
		std::memset(b, 0, sizeof b);
		std::memcpy(b, &x, sizeof x < sizeof b ? sizeof x : sizeof b);
	}
	ghidra_arr10(const GhidraCell &c);
	operator long double() const {
		long double x = 0;
		std::memcpy(&x, b, sizeof x < sizeof b ? sizeof x : sizeof b);
		return x;
	}
	unsigned long long bits() const {
		unsigned long long x = 0;
		std::memcpy(&x, b, sizeof x < sizeof b ? sizeof x : sizeof b);
		return x;
	}
	unsigned long long operator>>(int n) const {
		if (n <= 0)
			return bits();
		if (n >= 64)
			return 0;
		return bits() >> n;
	}
	unsigned long long operator<<(int n) const {
		if (n <= 0)
			return bits();
		if (n >= 64)
			return 0;
		return bits() << n;
	}
};
using unkbyte10 = ghidra_arr10;
using unkint10 = ghidra_arr10;
using unkuint10 = ghidra_arr10;
using BADSPACEBASE = char;

struct Call;
struct GhidraCell;

// SYSTEMTIME fields, including the nested dates inside TIME_ZONE_INFORMATION.
struct GTime {
	unsigned short wYear;
	unsigned short wMonth;
	unsigned short wDayOfWeek;
	unsigned short wDay;
	unsigned short wHour;
	unsigned short wMinute;
	unsigned short wSecond;
	unsigned short wMilliseconds;
};

// Every recovered struct access lands on one of these fields.
struct GStruct {
	unsigned v;
	unsigned _flag;
	unsigned ExceptionInformation[16];
	unsigned ExceptionCode;
	unsigned ExceptionFlags;
	char *_tmpfname;
	unsigned NumberParameters;
	char *_base;
	int _file;
	char *_ptr;
	int _cnt;
	unsigned unused;
	unsigned dwFileAttributes;
	unsigned ftCreationTime;
	unsigned short wMid;
	unsigned short wPid;
	unsigned short wCaps;
	unsigned short wNumButtons;
	char szPname[260];
	char cFileName[260];
	unsigned dwOSVersionInfoSize;
	unsigned dwPlatformId;
	unsigned short cbReserved2;
	unsigned char *lpReserved2;
	void *lpSecurityDescriptor;
	unsigned nLength;
	unsigned MaxCharSize;
	unsigned char LeadByte[12];
	int bInheritHandle;
	unsigned SpinCount;
	void *DebugInfo;
	long LockCount;
	long RecursionCount;
	void *OwningThread;
	void *LockSemaphore;
	unsigned short wYear;
	unsigned short wMonth;
	unsigned short wDayOfWeek;
	unsigned short wDay;
	unsigned short wHour;
	unsigned short wMinute;
	unsigned short wSecond;
	unsigned short wMilliseconds;
	GTime DaylightDate;
	GTime StandardDate;
	int Bias;
	int StandardBias;
	int DaylightBias;
	GStruct() { std::memset(this, 0, sizeof *this); }
	GStruct(const GhidraCell &c);
	Call operator*() const;
	unsigned operator+(const GStruct &o) const { return v + o.v; }
	unsigned operator-(const GStruct &o) const { return v - o.v; }
	GStruct &operator[](intptr_t i) {
		return *reinterpret_cast<GStruct *>((uintptr_t)v + (uintptr_t)i * 4);
	}
	bool operator==(const void *p) const { return (void *)(uintptr_t)v == p; }
	bool operator!=(const void *p) const { return (void *)(uintptr_t)v != p; }
	friend bool operator==(const void *p, const GStruct &g) { return g == p; }
	friend bool operator!=(const void *p, const GStruct &g) { return g != p; }
	// Exact integer compare. `0` is also a null pointer, so `==` would otherwise
	// tie operator==(const void *) with the built-in integer compare.
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator==(T x) const { return (unsigned)v == (unsigned)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator!=(T x) const { return (unsigned)v != (unsigned)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend bool operator==(T x, const GStruct &g) { return g == x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend bool operator!=(T x, const GStruct &g) { return g != x; }
	// Integers and pointers share one constructor so wasm32's identical integer widths still overload.
	template <class T, class = std::enable_if_t<std::is_integral<T>::value || std::is_pointer<T>::value>>
	GStruct(T x) : GStruct() {
		if constexpr (std::is_pointer<T>::value)
			v = (unsigned)(uintptr_t)x;
		else
			v = (unsigned)x;
	}
	GStruct(float x) : GStruct() { std::memcpy(&v, &x, 4); }
	GStruct(double x) : GStruct() { float f = (float)x; std::memcpy(&v, &f, 4); }
	GStruct(long double x) : GStruct() { float f = (float)x; std::memcpy(&v, &f, 4); }
	operator int() const { return (int)v; }
	explicit operator unsigned() const { return v; }
#if ULONG_MAX > UINT_MAX
	explicit operator unsigned long() const { return v; }
#endif
	explicit operator void *() const { return (void *)(uintptr_t)v; }
	explicit operator bool() const { return v != 0; }
	// Listings use `->` on typedefs that are values here (PEXCEPTION_RECORD).
	GStruct *operator->() { return this; }
	const GStruct *operator->() const { return this; }
	// Templates are exact matches for every integer width. A single
	// operator+(unsigned) is ambiguous on clang with the built-in operator
	// once GStruct converts to int.
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator&(T x) const { return v & (unsigned)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator|(T x) const { return v | (unsigned)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator^(T x) const { return v ^ (unsigned)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator+(T x) const { return v + (unsigned)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator-(T x) const { return v - (unsigned)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator*(T x) const { return v * (unsigned)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator/(T x) const { unsigned d = (unsigned)x; return d ? v / d : 0; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator%(T x) const { unsigned d = (unsigned)x; return d ? v % d : 0; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator<<(T x) const { return v << ((unsigned)x & 31); }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator>>(T x) const { return v >> ((unsigned)x & 31); }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend unsigned operator&(T a, const GStruct &g) { return (unsigned)a & g.v; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend unsigned operator|(T a, const GStruct &g) { return (unsigned)a | g.v; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend unsigned operator^(T a, const GStruct &g) { return (unsigned)a ^ g.v; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend unsigned operator+(T a, const GStruct &g) { return (unsigned)a + g.v; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend unsigned operator-(T a, const GStruct &g) { return (unsigned)a - g.v; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend unsigned operator*(T a, const GStruct &g) { return (unsigned)a * g.v; }
	unsigned operator~() const { return ~v; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	GStruct &operator+=(T x) { v += (unsigned)x; return *this; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	GStruct &operator-=(T x) { v -= (unsigned)x; return *this; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	GStruct &operator|=(T x) { v |= (unsigned)x; return *this; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	GStruct &operator&=(T x) { v &= (unsigned)x; return *this; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	GStruct &operator^=(T x) { v ^= (unsigned)x; return *this; }
	template <class T, class = std::enable_if_t<!std::is_same<std::remove_cv_t<std::remove_reference_t<T>>, GStruct>::value>>
	GStruct &operator=(const T &x) {
		if constexpr (std::is_pointer<T>::value)
			v = (unsigned)(uintptr_t)x;
		else
			v = (unsigned)(int)x;
		return *this;
	}
	GStruct &operator++() { ++v; return *this; }
	unsigned operator++(int) { unsigned o = v; ++v; return o; }
	GStruct &operator--() { --v; return *this; }
	unsigned operator--(int) { unsigned o = v; --v; return o; }
};

struct Call;

// A proxy so `&SYM` converts to whatever pointer the listing stores it in.
struct AnyPtr {
	void *p;
	// A template is an exact match for every integer width. A single operator+(int)
	// is ambiguous on clang once another type is constructible from AnyPtr.
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	AnyPtr operator+(T n) const { return AnyPtr{(char *)p + (ptrdiff_t)n}; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	AnyPtr operator-(T n) const { return AnyPtr{(char *)p - (ptrdiff_t)n}; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator==(T n) const { return (int)(uintptr_t)p == (int)n; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator!=(T n) const { return (int)(uintptr_t)p != (int)n; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator<(T n) const { return (uintptr_t)p < (uintptr_t)(uint32_t)n; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator>(T n) const { return (uintptr_t)p > (uintptr_t)(uint32_t)n; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator<=(T n) const { return (uintptr_t)p <= (uintptr_t)(uint32_t)n; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator>=(T n) const { return (uintptr_t)p >= (uintptr_t)(uint32_t)n; }
	template <class T>
	operator T *() const { return (T *)p; }
	operator int() const { return (int)(uintptr_t)p; }
	Call operator[](intptr_t i) const;
};

// `*DAT` is both a loaded value and, in `(*DAT)(args)`, a call.
struct Call {
	uintptr_t fn;
	operator float() const {
		float f = 0;
		uint32_t b = (uint32_t)fn;
		std::memcpy(&f, &b, 4);
		return f;
	}
	explicit operator long double() const { return (float)*this; }
	explicit operator int() const { return (int)fn; }
	explicit operator unsigned() const { return (unsigned)fn; }
	explicit operator void *() const { return (void *)fn; }
	explicit operator bool() const { return fn != 0; }
	template <class T>
	Call &operator=(T v) {
		if constexpr (std::is_pointer<T>::value)
			fn = (uintptr_t)v;
		else if constexpr (std::is_floating_point<T>::value) {
			float f = (float)v;
			std::memcpy(&fn, &f, 4);
		} else if constexpr (std::is_integral<T>::value)
			fn = (unsigned)v;
		else
			fn = (unsigned)(int)v;
		return *this;
	}
	operator char *() const { return (char *)fn; }
	explicit operator unsigned char *() const { return (unsigned char *)fn; }
	bool operator==(int x) const { return (int)fn == x; }
	bool operator!=(int x) const { return (int)fn != x; }
	bool operator<(float x) const { return (float)*this < x; }
	bool operator>(float x) const { return (float)*this > x; }
	bool operator<=(float x) const { return (float)*this <= x; }
	bool operator>=(float x) const { return (float)*this >= x; }
	friend bool operator<(float x, const Call &c) { return x < (float)c; }
	friend bool operator>(float x, const Call &c) { return x > (float)c; }
	friend bool operator<=(float x, const Call &c) { return x <= (float)c; }
	friend bool operator>=(float x, const Call &c) { return x >= (float)c; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator&(T x) const { return (unsigned)fn & (unsigned)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator|(T x) const { return (unsigned)fn | (unsigned)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator<<(T n) const { return (unsigned)fn << ((unsigned)n & 31); }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	unsigned operator>>(T n) const { return (unsigned)fn >> ((unsigned)n & 31); }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend unsigned operator&(T a, const Call &c) { return (unsigned)a & (unsigned)c.fn; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend unsigned operator|(T a, const Call &c) { return (unsigned)a | (unsigned)c.fn; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend unsigned operator<<(T a, const Call &c) { return (unsigned)a << ((unsigned)c.fn & 31); }
	template <class... A>
	uintptr_t operator()(A&&... a) const {
		return ghidra_invoke(fn, static_cast<A&&>(a)...);
	}
};

inline CodePtr::CodePtr(const Call &c) : fn(c.fn) {}

inline Call AnyPtr::operator[](intptr_t i) const {
	uint32_t v = 0;
	if (p)
		std::memcpy(&v, (char *)p + (uintptr_t)i * 4, 4);
	return Call{v};
}

// `*SYM` is an lvalue. The loaded word is also a float and a callable pointer.
struct CellLvalue {
	unsigned char *addr;
	uint32_t bits() const {
		uint32_t v = 0;
		if (addr)
			std::memcpy(&v, addr, 4);
		return v;
	}
	operator int() const { return (int)bits(); }
	explicit operator float() const {
		float f = 0;
		if (addr)
			std::memcpy(&f, addr, 4);
		return f;
	}
	explicit operator long double() const { return (float)*this; }
	explicit operator char *() const { return (char *)(uintptr_t)bits(); }
	explicit operator unsigned char *() const { return (unsigned char *)(uintptr_t)bits(); }
	explicit operator bool() const { return bits() != 0; }
	friend bool operator<(float x, const CellLvalue &c) { return x < (float)c; }
	friend bool operator>(float x, const CellLvalue &c) { return x > (float)c; }
	friend bool operator<=(float x, const CellLvalue &c) { return x <= (float)c; }
	friend bool operator>=(float x, const CellLvalue &c) { return x >= (float)c; }
	bool operator<(float x) const { return (float)*this < x; }
	bool operator>(float x) const { return (float)*this > x; }
	bool operator<=(float x) const { return (float)*this <= x; }
	bool operator>=(float x) const { return (float)*this >= x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator<(T x) const { return (int)*this < (int)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator>(T x) const { return (int)*this > (int)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator<=(T x) const { return (int)*this <= (int)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator>=(T x) const { return (int)*this >= (int)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator==(T x) const { return (int)*this == (int)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	bool operator!=(T x) const { return (int)*this != (int)x; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend bool operator<(T x, const CellLvalue &c) { return (int)x < (int)c; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend bool operator>(T x, const CellLvalue &c) { return (int)x > (int)c; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend bool operator<=(T x, const CellLvalue &c) { return (int)x <= (int)c; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend bool operator>=(T x, const CellLvalue &c) { return (int)x >= (int)c; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend bool operator==(T x, const CellLvalue &c) { return (int)x == (int)c; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	friend bool operator!=(T x, const CellLvalue &c) { return (int)x != (int)c; }
	template <class T>
	CellLvalue &operator=(T v);
	template <class... A>
	uintptr_t operator()(A&&... a) const {
		return ghidra_invoke((uintptr_t)bits(), static_cast<A&&>(a)...);
	}
};

// One byte of the original image. Its address is the symbol's address.
struct GhidraCell {
	// Eight bytes so a float or double load is inside the object. A one-byte
	// cell lets the compiler drop the rest of a memcpy and read stack garbage.
	unsigned char raw[8];
	AnyPtr operator&() { return AnyPtr{this}; }
	// `DAT + n` is the stored pointer plus n (`mov eax, [DAT]; lea eax, [eax+n]`).
	// The address of the symbol is `&DAT + n`. A template is an exact match for
	// every integer width; one operator+(int) ties the built-in add.
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	AnyPtr operator+(T n) const {
		return AnyPtr{(void *)(uintptr_t)(uint32_t)((unsigned)(int)*this + (unsigned)(uint32_t)n)};
	}
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	AnyPtr operator-(T n) const {
		return AnyPtr{(void *)(uintptr_t)(uint32_t)((unsigned)(int)*this - (unsigned)(uint32_t)n)};
	}
	GhidraCell &operator[](intptr_t i) {
		return *reinterpret_cast<GhidraCell *>((uintptr_t)this + (uintptr_t)i);
	}
	CellLvalue operator*() { return CellLvalue{reinterpret_cast<unsigned char *>(this)}; }
	template <class T>
	GhidraCell &operator=(T v) {
		if constexpr (std::is_pointer<T>::value) {
			uint32_t p = (uint32_t)(uintptr_t)v;
			std::memcpy(this, &p, 4);
		} else if constexpr (std::is_floating_point<T>::value) {
			if constexpr (sizeof(T) >= 8) {
				double d = (double)v;
				std::memcpy(this, &d, 8);
			} else {
				float f = (float)v;
				std::memcpy(this, &f, 4);
			}
		} else if constexpr (std::is_integral<T>::value) {
			auto x = v;
			std::memcpy(this, &x, sizeof x < 4 ? sizeof x : 4);
		} else {
			std::memcpy(this, &v, sizeof(v) < 8 ? sizeof(v) : 4);
		}
		return *this;
	}
	// One implicit conversion. More than one makes `cell == 0` ambiguous.
	operator int() const {
		int v = 0;
		std::memcpy(&v, this, 4);
		return v;
	}
	explicit operator unsigned() const { return (unsigned)(int)*this; }
	explicit operator long double() const {
		float f = 0;
		std::memcpy(&f, this, 4);
		return f;
	}
	explicit operator float() const {
		float f = 0;
		std::memcpy(&f, this, 4);
		return f;
	}
	explicit operator void *() const { return (void *)(uintptr_t)(unsigned)(int)*this; }
	explicit operator bool() const { return (int)*this != 0; }
	int operator+(const GhidraCell &o) const { return (int)*this + (int)o; }
	int operator-(const GhidraCell &o) const { return (int)*this - (int)o; }
	int operator+(const CellLvalue &o) const { return (int)*this + (int)o; }
	int operator-(const CellLvalue &o) const { return (int)*this - (int)o; }
	bool operator==(const CodePtr &p) const { return (unsigned)(int)*this == (unsigned)p.fn; }
	bool operator!=(const CodePtr &p) const { return (unsigned)(int)*this != (unsigned)p.fn; }
	bool operator==(const GhidraCell &o) const { return (int)*this == (int)o; }
	bool operator!=(const GhidraCell &o) const { return (int)*this != (int)o; }
	// Exact comparisons. A converting constructor on CodePtr makes `cell == 1`
	// match `operator==(const CodePtr &)` as well as the built-in integer compare.
	bool operator==(int x) const { return (int)*this == x; }
	bool operator!=(int x) const { return (int)*this != x; }
	bool operator==(unsigned x) const { return (unsigned)(int)*this == x; }
	bool operator!=(unsigned x) const { return (unsigned)(int)*this != x; }
	bool operator==(float x) const { return (float)*this == x; }
	bool operator!=(float x) const { return (float)*this != x; }
	bool operator==(double x) const { return (double)(float)*this == x; }
	bool operator!=(double x) const { return (double)(float)*this != x; }
	bool operator==(long double x) const { return (long double)(float)*this == x; }
	bool operator!=(long double x) const { return (long double)(float)*this != x; }
	bool operator==(char x) const { return (char)(int)*this == x; }
	bool operator!=(char x) const { return (char)(int)*this != x; }
	friend bool operator==(int x, const GhidraCell &c) { return c == x; }
	friend bool operator!=(int x, const GhidraCell &c) { return c != x; }
	friend bool operator==(unsigned x, const GhidraCell &c) { return c == x; }
	friend bool operator!=(unsigned x, const GhidraCell &c) { return c != x; }
	friend bool operator==(float x, const GhidraCell &c) { return c == x; }
	friend bool operator!=(float x, const GhidraCell &c) { return c != x; }
	friend bool operator==(double x, const GhidraCell &c) { return c == x; }
	friend bool operator!=(double x, const GhidraCell &c) { return c != x; }
	friend bool operator==(long double x, const GhidraCell &c) { return c == x; }
	friend bool operator!=(long double x, const GhidraCell &c) { return c != x; }
	friend bool operator==(char x, const GhidraCell &c) { return c == x; }
	friend bool operator!=(char x, const GhidraCell &c) { return c != x; }
	template <class T>
	bool operator==(T *p) const { return (uintptr_t)(unsigned)(int)*this == (uintptr_t)p; }
	template <class T>
	bool operator!=(T *p) const { return (uintptr_t)(unsigned)(int)*this != (uintptr_t)p; }
	template <class T>
	bool operator<(T *p) const { return (uintptr_t)(unsigned)(int)*this < (uintptr_t)p; }
	template <class T>
	bool operator<=(T *p) const { return (uintptr_t)(unsigned)(int)*this <= (uintptr_t)p; }
	template <class T>
	bool operator>(T *p) const { return (uintptr_t)(unsigned)(int)*this > (uintptr_t)p; }
	template <class T>
	bool operator>=(T *p) const { return (uintptr_t)(unsigned)(int)*this >= (uintptr_t)p; }
	template <class T>
	friend bool operator==(T *p, const GhidraCell &c) { return c == p; }
	template <class T>
	friend bool operator!=(T *p, const GhidraCell &c) { return c != p; }
	template <class T>
	friend bool operator<(T *p, const GhidraCell &c) { return (uintptr_t)p < (uintptr_t)(unsigned)(int)c; }
	template <class T>
	friend bool operator<=(T *p, const GhidraCell &c) { return (uintptr_t)p <= (uintptr_t)(unsigned)(int)c; }
	template <class T>
	friend bool operator>(T *p, const GhidraCell &c) { return (uintptr_t)p > (uintptr_t)(unsigned)(int)c; }
	template <class T>
	friend bool operator>=(T *p, const GhidraCell &c) { return (uintptr_t)p >= (uintptr_t)(unsigned)(int)c; }
	bool operator<(const CellLvalue &c) const { return (int)*this < (int)c; }
	bool operator>(const CellLvalue &c) const { return (int)*this > (int)c; }
	bool operator<=(const CellLvalue &c) const { return (int)*this <= (int)c; }
	bool operator>=(const CellLvalue &c) const { return (int)*this >= (int)c; }
	friend bool operator<(const CellLvalue &c, const GhidraCell &g) { return (int)c < (int)g; }
	friend bool operator>(const CellLvalue &c, const GhidraCell &g) { return (int)c > (int)g; }
	friend bool operator<=(const CellLvalue &c, const GhidraCell &g) { return (int)c <= (int)g; }
	friend bool operator>=(const CellLvalue &c, const GhidraCell &g) { return (int)c >= (int)g; }
};

template <class T>
inline CellLvalue &CellLvalue::operator=(T v) {
	*reinterpret_cast<GhidraCell *>(addr) = v;
	return *this;
}
inline ghidra_arr10::ghidra_arr10(const GhidraCell &c) {
	std::memset(b, 0, sizeof b);
	int v = (int)c;
	std::memcpy(b, &v, 4);
}
inline GStruct::GStruct(const GhidraCell &c) : GStruct() { v = (unsigned)(int)c; }
inline Call GStruct::operator*() const { return Call{v}; }
inline CodePtr::CodePtr(const GhidraCell &c) : fn((unsigned)(int)c) {}

// An x87 qword. operator float on the one-word cell would read only the low half,
// which is zero for the doubles this DLL actually uses.
struct GhidraF64 : GhidraCell {
	using GhidraCell::operator=;
	explicit operator float() const {
		double d = 0;
		std::memcpy(&d, this, 8);
		return (float)d;
	}
	explicit operator double() const {
		double d = 0;
		std::memcpy(&d, this, 8);
		return d;
	}
	explicit operator long double() const {
		double d = 0;
		std::memcpy(&d, this, 8);
		return (long double)d;
	}
};

struct SCell {
	char c;
	operator char *() const { return (char *)this; }
	operator unsigned char *() const { return (unsigned char *)this; }
	operator void *() const { return (void *)this; }
	operator int() const { return (int)(uintptr_t)this; }
	char operator[](int i) const { return ((char *)this)[i]; }
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	char *operator+(T n) const { return (char *)this + (ptrdiff_t)n; }
	AnyPtr operator&() { return AnyPtr{(void *)this}; }
};

// A string symbol passed to an indirect call must be its address. Copying the
// one-byte cell makes the callee see that byte (`'l'`) as the pointer.
template <class T>
inline auto ghidra_call_arg(T &x) -> std::enable_if_t<std::is_same<std::remove_cv_t<T>, SCell>::value, char *> {
	return (char *)&x;
}
// A data symbol passed to an indirect call is the 4-byte value it holds.
// Passing the 8-byte cell object makes the wasm type disagree with the callee.
template <class T>
inline auto ghidra_call_arg(T &x) -> std::enable_if_t<std::is_same<std::remove_cv_t<T>, GhidraCell>::value, uint32_t> {
	uint32_t v = 0;
	std::memcpy(&v, &x, 4);
	return v;
}
template <class T>
inline auto ghidra_call_arg(T &x) -> std::enable_if_t<
	!std::is_same<std::remove_cv_t<T>, SCell>::value &&
	!std::is_same<std::remove_cv_t<T>, GhidraCell>::value, T &> {
	return x;
}
template <class T>
std::remove_reference_t<T> &ghidra_lval();
template <class T>
using ghidra_arg_t = std::remove_reference_t<decltype(ghidra_call_arg(ghidra_lval<T>()))>;

#ifdef GHIDRA_WASM
// Default argument promotions, then the Emscripten va_list layout: 4-byte
// scalars packed at 4, 8-byte scalars aligned up to 8. Arrays decay to the
// address of their first element, which is what a C call would pass.
template <class T>
GhidraVa ghidra_to_piece(T &x) {
	auto &&v = ghidra_call_arg(x);
	using U = std::remove_cv_t<std::remove_reference_t<decltype(v)>>;
	GhidraVa p{};
	if constexpr (std::is_array<U>::value) {
		p.lo = (uint32_t)(uintptr_t)&v[0];
	} else if constexpr (std::is_floating_point<U>::value) {
		double d = (double)v;
		std::memcpy(&p.lo, &d, 8);
		p.kind = 1;
	} else if constexpr (std::is_pointer<U>::value) {
		p.lo = (uint32_t)(uintptr_t)v;
	} else if constexpr (std::is_integral<U>::value) {
		if constexpr (sizeof(U) > 4) {
			uint64_t b = (uint64_t)v;
			std::memcpy(&p.lo, &b, 8);
			p.kind = 1;
		} else {
			p.lo = (uint32_t)v;
		}
	} else if constexpr (std::is_function<U>::value) {
		p.lo = (uint32_t)(uintptr_t)&v;
	} else if constexpr (std::is_convertible<U, int>::value) {
		p.lo = (uint32_t)(int)v;
	} else if constexpr (std::is_object<U>::value) {
		if constexpr (sizeof(U) >= 4 && std::is_trivially_copyable<U>::value)
			std::memcpy(&p.lo, &v, 4);
	}
	return p;
}
#endif

// The pointer is hidden from the optimizer so the call stays indirect.
// A direct call with a mismatched wasm type is rejected by the linker.
template <class F, class... A>
uintptr_t ghidra_invoke(F fn, A&&... a) {
	uintptr_t target = (uintptr_t)fn;
#ifdef GHIDRA_WASM
	int fixed = ghidra_engine_fixed(target);
	if (fixed > 0) {
		GhidraRet vret = ghidra_engine_ret(target);
		if constexpr (sizeof...(A) == 0)
			return ghidra_call_vararg((void *)target, (int)vret, fixed, nullptr, 0);
		else {
			GhidraVa pcs[] = {ghidra_to_piece(a)...};
			return ghidra_call_vararg((void *)target, (int)vret, fixed, pcs, (int)sizeof...(A));
		}
	}
#endif
	GhidraRet ret = ghidra_engine_ret(target);
	if (ret == GhidraRet::F32) {
		using Fn = float (*)(ghidra_arg_t<A>...);
		Fn p = reinterpret_cast<Fn>(fn);
		asm volatile("" : "+r"(p));
		float x = p(ghidra_call_arg(a)...);
		uint32_t bits = 0;
		std::memcpy(&bits, &x, 4);
		return bits;
	}
	if (ret == GhidraRet::VOID) {
		using Fn = void (*)(ghidra_arg_t<A>...);
		Fn p = reinterpret_cast<Fn>(fn);
		asm volatile("" : "+r"(p));
		p(ghidra_call_arg(a)...);
		return 0;
	}
	using Fn = uintptr_t (*)(ghidra_arg_t<A>...);
	Fn p = reinterpret_cast<Fn>(fn);
	asm volatile("" : "+r"(p));
	return p(ghidra_call_arg(a)...);
}

// Each side module exports its data. The same symbol name would make the
// client's loads resolve to the server image, which is already relocated.
#if defined(GHIDRA_SERVER)
#define ghidra_image ghidra_image_server
#define ghidra_image_size ghidra_image_size_server
#define ghidra_relocs ghidra_relocs_server
#define ghidra_reloc_count ghidra_reloc_count_server
#elif defined(GHIDRA_CLIENT)
#define ghidra_image ghidra_image_client
#define ghidra_image_size ghidra_image_size_client
#define ghidra_relocs ghidra_relocs_client
#define ghidra_reloc_count ghidra_reloc_count_client
#endif

extern unsigned char ghidra_image[];
extern unsigned ghidra_image_size;

template <class T>
inline T &gh_at(uintptr_t addr) {
	if (addr >= 0x10000000u) {
		uintptr_t off = addr - 0x10000000u;
		if (off < ghidra_image_size)
			return *reinterpret_cast<T *>(ghidra_image + off);
	}
	static unsigned char low[65536 + 8];
	return *reinterpret_cast<T *>(low + (addr & 0xffffu));
}

#define GH_CELL(addr, type) (gh_at<type>(addr))

inline long double ghidra_sqrt(long double x) { return std::sqrt(x); }
template <class T>
inline T ghidra_abs(T x) {
	if constexpr (std::is_floating_point<T>::value)
		return (T)std::fabs((double)x);
	else if constexpr (std::is_integral<T>::value && std::is_signed<T>::value)
		return x < (T)0 ? (T)-x : x;
	else
		return x;
}
inline bool ghidra_isnan(long double x) { return std::isnan((double)x); }
inline long double ghidra_round(long double x) { return std::round(x); }
inline void ghidra_lock() {}
inline void ghidra_unlock() {}
inline int ghidra_popcount(unsigned long long x) { return __builtin_popcountll(x); }

inline long double fpatan(long double y, long double x) { return std::atan2((double)y, (double)x); }
inline long double f2xm1(long double x) { return std::exp2((double)x) - 1.0L; }
inline long double fscale(long double x, long double n) { return std::ldexp((double)x, (int)n); }
inline long double fyl2x(long double y, long double x) { return y * std::log2((double)x); }
inline long double fsin(long double x) { return std::sin((double)x); }
inline long double fcos(long double x) { return std::cos((double)x); }
inline long double fptan(long double x) { return std::tan((double)x); }
inline long double fprem(long double x, long double y) { return std::fmod((double)x, (double)y); }
inline long double fxtract(long double x) { return x; }
inline long double frndint(long double x) { return std::round(x); }

inline uintptr_t swi(int) { return 0; }
inline void halt_baddata() {}

#define CONCAT11(a, b) ((unsigned)((((unsigned)(a) & 0xffu) << 8) | ((unsigned)(b) & 0xffu)))
#define CONCAT12(a, b) ((unsigned)((((unsigned)(a) & 0xffu) << 16) | ((unsigned)(b) & 0xffffu)))
#define CONCAT13(a, b) ((unsigned)((((unsigned)(a) & 0xffu) << 24) | ((unsigned)(b) & 0xffffffu)))
#define CONCAT14(a, b) ((unsigned long long)((((unsigned long long)(a) & 0xffull) << 32) | ((unsigned long long)(b) & 0xffffffffull)))
#define CONCAT16(a, b) ((unsigned long long)((((unsigned long long)(a) & 0xffull) << 48) | ((unsigned long long)(b) & 0xffffffffffffull)))
#define CONCAT17(a, b) ((unsigned long long)((((unsigned long long)(a) & 0xffull) << 56) | ((unsigned long long)(b) & 0xffffffffffffffull)))
#define CONCAT22(a, b) ((unsigned)((((unsigned)(a) & 0xffffu) << 16) | ((unsigned)(b) & 0xffffu)))
#define CONCAT24(a, b) ((unsigned long long)((((unsigned long long)(a) & 0xffffull) << 32) | ((unsigned long long)(b) & 0xffffffffull)))
#define CONCAT26(a, b) ((unsigned long long)((((unsigned long long)(a) & 0xffffull) << 48) | ((unsigned long long)(b) & 0xffffffffffffull)))
inline unsigned long long CONCAT28(unsigned long long a, unsigned long long b) {
	return (b & 0xffffffffffffull) | ((a & 0xffffull) << 48);
}
#define CONCAT31(a, b) ((unsigned)((((unsigned)(a) & 0xffffffu) << 8) | ((unsigned)(b) & 0xffu)))
#define CONCAT44(a, b) ((unsigned long long)((((unsigned long long)(unsigned)(a)) << 32) | (unsigned)(b)))

#define CARRY1(a, b) ((unsigned)((((unsigned)(unsigned char)(a) + (unsigned char)(b)) >> 8) & 1u))
#define CARRY4(a, b) ((unsigned)((((unsigned long long)(unsigned)(a) + (unsigned)(b)) >> 32) & 1u))
#define SCARRY1(a, b) ((unsigned)(((((int)(signed char)(a) + (int)(signed char)(b)) > 127) || (((int)(signed char)(a) + (int)(signed char)(b)) < -128))))
#define SCARRY4(a, b) ((unsigned)(((((long long)(int)(a) + (long long)(int)(b)) > 2147483647LL) || (((long long)(int)(a) + (long long)(int)(b)) < -2147483648LL))))

template <class T>
inline unsigned SUB41(T x, int off) {
	unsigned char buf[16] = {};
	std::memcpy(buf, &x, sizeof x < 16 ? sizeof x : 16);
	return buf[off];
}
template <class T>
inline unsigned SUB42(T x, int off) {
	unsigned char buf[16] = {};
	std::memcpy(buf, &x, sizeof x < 16 ? sizeof x : 16);
	unsigned short r = 0;
	std::memcpy(&r, buf + off, 2);
	return r;
}
template <class T>
inline unsigned SUB84(T x, int off) {
	unsigned char buf[16] = {};
	std::memcpy(buf, &x, sizeof x < 16 ? sizeof x : 16);
	unsigned r = 0;
	std::memcpy(&r, buf + off, 4);
	return r;
}
template <class T>
inline unsigned SUB87(T x, int off) {
	unsigned char buf[16] = {};
	std::memcpy(buf, &x, sizeof x < 16 ? sizeof x : 16);
	unsigned r = 0;
	std::memcpy(&r, buf + off, 4);
	return r;
}
template <class T>
inline unsigned SUB104(T x, int off) {
	unsigned char buf[16] = {};
	std::memcpy(buf, &x, sizeof x < 16 ? sizeof x : 16);
	unsigned r = 0;
	std::memcpy(&r, buf + off, 4);
	return r;
}
#define ZEXT48(x) ((unsigned long long)(unsigned)(x))

template <class T>
inline int ghidra_switch(T x) {
	if constexpr (std::is_floating_point<T>::value) {
		float f = (float)x;
		int i = 0;
		std::memcpy(&i, &f, 4);
		return i;
	} else if constexpr (std::is_pointer<T>::value)
		return (int)(uintptr_t)x;
	else
		return (int)x;
}

template <class D, class V>
inline void ghidra_setarr(D *dst, V v) {
	unsigned char buf[16] = {};
	std::memcpy(buf, &v, sizeof v < 16 ? sizeof v : 16);
	std::memcpy(dst, buf, 4);
}

struct FnBits {
	uintptr_t fn;
	operator int() const { return (int)fn; }
	operator unsigned() const { return (unsigned)fn; }
	template <class T>
	operator T *() const { return (T *)fn; }
};
template <class R, class... A>
inline FnBits ghidra_fp(R (*p)(A...)) { return FnBits{(uintptr_t)p}; }

// Ghidra partials: `var._off_size_` reads or writes `size` bytes at `off`.
template <int Off, int Sz, class T>
struct GhidraPiece {
	T *obj;
	unsigned get() const {
		unsigned char buf[32] = {};
		std::memcpy(buf, obj, sizeof(T) < 32 ? sizeof(T) : 32);
		unsigned r = 0;
		int n = Sz < 4 ? Sz : 4;
		if (Off >= 0 && Off + n <= 32)
			std::memcpy(&r, buf + Off, n);
		return r;
	}
	operator unsigned() const { return get(); }
	explicit operator bool() const { return get() != 0; }
	GhidraPiece &operator=(unsigned v) {
		unsigned char buf[32] = {};
		std::memcpy(buf, obj, sizeof(T) < 32 ? sizeof(T) : 32);
		int n = Sz < 4 ? Sz : 4;
		if (Off >= 0 && Off + n <= 32)
			std::memcpy(buf + Off, &v, n);
		std::memcpy(obj, buf, sizeof(T) < 32 ? sizeof(T) : 32);
		return *this;
	}
};
template <int Off, int Sz, class T>
inline GhidraPiece<Off, Sz, T> ghidra_piece(T &obj) {
	return GhidraPiece<Off, Sz, T>{&obj};
}

// Casts the decompiler emits between pointers and floats.
template <class To, class From>
inline To ghidra_as(From x) {
	if constexpr (std::is_pointer<From>::value) {
		uint32_t b = (uint32_t)(uintptr_t)x;
		if constexpr (std::is_integral<To>::value)
			return (To)b;
		float f = 0;
		std::memcpy(&f, &b, 4);
		return (To)f;
	} else if constexpr (std::is_floating_point<From>::value) {
		return (To)x;
	} else if constexpr (std::is_integral<From>::value) {
		return (To)x;
	} else {
		return (To)x;
	}
}
template <class T, class From>
inline T *ghidra_pcast(From x) {
	if constexpr (std::is_pointer<From>::value)
		return (T *)x;
	else if constexpr (std::is_integral<From>::value)
		return (T *)(uintptr_t)(unsigned)x;
	else if constexpr (std::is_floating_point<From>::value) {
		uint32_t b = 0;
		float f = (float)x;
		std::memcpy(&b, &f, 4);
		return (T *)(uintptr_t)b;
	} else
		return (T *)(uintptr_t)(unsigned)(int)x;
}

// 3-byte and 6-byte integers from the decompiler.
struct int3 {
	unsigned v;
	int3() : v(0) {}
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	int3(T x) : v((unsigned)x & 0xffffffu) {}
	operator unsigned() const { return v; }
};
struct uint3 {
	unsigned v;
	uint3() : v(0) {}
	template <class T, class = std::enable_if_t<std::is_integral<T>::value>>
	uint3(T x) : v((unsigned)x & 0xffffffu) {}
	operator unsigned() const { return v; }
};
struct int6 {
	unsigned long long v;
	int6() : v(0) {}
	template <class T>
	int6(T x) : v(0) {
		if constexpr (std::is_pointer<T>::value)
			v = (unsigned long long)(uintptr_t)x;
		else
			std::memcpy(&v, &x, sizeof x < 6 ? sizeof x : 6);
	}
	operator unsigned long long() const { return v; }
};
struct uint6 {
	unsigned long long v;
	uint6() : v(0) {}
	template <class T>
	uint6(T x) : v(0) {
		if constexpr (std::is_pointer<T>::value)
			v = (unsigned long long)(uintptr_t)x;
		else
			std::memcpy(&v, &x, sizeof x < 6 ? sizeof x : 6);
	}
	operator unsigned long long() const { return v; }
};

// Assignment and cast helpers. The listings are 32-bit C: pointers, integers,
// and function addresses are interchangeable. Clang rejects those implicit
// conversions, so the wasm build rewrites stores and casts through these.
template <class Dest, class From>
inline auto ghidra_asg(From x) {
	using To = std::remove_cv_t<std::remove_reference_t<Dest>>;
	using FromD = std::remove_cv_t<std::remove_reference_t<From>>;
	if constexpr (std::is_same<To, FromD>::value) {
		return x;
	} else if constexpr (std::is_pointer<To>::value) {
		if constexpr (std::is_pointer<From>::value)
			return (To)x;
		else if constexpr (std::is_integral<From>::value)
			return (To)(uintptr_t)(uint32_t)x;
		else if constexpr (std::is_floating_point<From>::value) {
			uint32_t b = 0;
			float f = (float)x;
			std::memcpy(&b, &f, 4);
			return (To)(uintptr_t)b;
		} else
			return (To)(uintptr_t)(uint32_t)(int)x;
	} else if constexpr (std::is_integral<To>::value) {
		if constexpr (std::is_pointer<From>::value)
			return (To)(uintptr_t)x;
		else if constexpr (std::is_integral<From>::value)
			return (To)x;
		else if constexpr (std::is_floating_point<From>::value)
			return (To)x;
		else
			return (To)(uint32_t)(int)x;
	} else if constexpr (std::is_floating_point<To>::value) {
		if constexpr (std::is_pointer<From>::value) {
			uint32_t b = (uint32_t)(uintptr_t)x;
			float f = 0;
			std::memcpy(&f, &b, 4);
			return (To)f;
		} else
			return (To)x;
	} else {
		return x;
	}
}

template <class To, class From>
inline To ghidra_trunc(From x) {
	if constexpr (std::is_pointer<From>::value)
		return (To)(uintptr_t)x;
	else if constexpr (std::is_integral<From>::value)
		return (To)x;
	else if constexpr (std::is_floating_point<From>::value)
		return (To)x;
	else
		return (To)(uintptr_t)(unsigned)(int)x;
}

template <class To, class From>
inline To ghidra_ctor(From x) {
	if constexpr (std::is_pointer<From>::value)
		return To((uintptr_t)x);
	else if constexpr (std::is_integral<From>::value)
		return To(x);
	else if constexpr (std::is_floating_point<From>::value)
		return To(x);
	else
		return To((unsigned)(int)x);
}

template <class T>
inline uintptr_t ghidra_addr(T x) {
	if constexpr (std::is_pointer<T>::value)
		return (uintptr_t)x;
	else if constexpr (std::is_integral<T>::value)
		return (uintptr_t)(uint32_t)x;
	else
		return (uintptr_t)(uint32_t)(int)x;
}

// A cell's only implicit conversion is to int. `float <= cell` would therefore
// read the dword as an integer (2.0f becomes 1073741824) and a fill loop would
// never finish. Float arithmetic has the same problem. Read 4-byte cells as
// float bits, and x87 qwords as the full double, when the other operand is floating.
template <class C>
inline constexpr bool ghidra_is_numcell =
	std::is_same<std::decay_t<C>, GhidraCell>::value ||
	std::is_same<std::decay_t<C>, GhidraF64>::value ||
	std::is_same<std::decay_t<C>, CellLvalue>::value;

template <class T, class C>
inline T ghidra_num(C c) {
	using D = std::decay_t<C>;
	if constexpr (std::is_same<D, GhidraF64>::value)
		return static_cast<T>(c);
	else if constexpr (std::is_same<D, GhidraCell>::value || std::is_same<D, CellLvalue>::value)
		return static_cast<T>(static_cast<float>(c));
	else
		return static_cast<T>(c);
}

template <class T, class C,
	std::enable_if_t<std::is_floating_point<std::decay_t<T>>::value && ghidra_is_numcell<C>, int> = 0>
inline auto operator+(T a, const C &b) {
	return a + ghidra_num<std::decay_t<T>>(b);
}
template <class T, class C,
	std::enable_if_t<std::is_floating_point<std::decay_t<T>>::value && ghidra_is_numcell<C>, int> = 0>
inline auto operator+(const C &a, T b) {
	return ghidra_num<std::decay_t<T>>(a) + b;
}
template <class T, class C,
	std::enable_if_t<std::is_floating_point<std::decay_t<T>>::value && ghidra_is_numcell<C>, int> = 0>
inline auto operator-(T a, const C &b) {
	return a - ghidra_num<std::decay_t<T>>(b);
}
template <class T, class C,
	std::enable_if_t<std::is_floating_point<std::decay_t<T>>::value && ghidra_is_numcell<C>, int> = 0>
inline auto operator-(const C &a, T b) {
	return ghidra_num<std::decay_t<T>>(a) - b;
}
template <class T, class C,
	std::enable_if_t<std::is_floating_point<std::decay_t<T>>::value && ghidra_is_numcell<C>, int> = 0>
inline auto operator*(T a, const C &b) {
	return a * ghidra_num<std::decay_t<T>>(b);
}
template <class T, class C,
	std::enable_if_t<std::is_floating_point<std::decay_t<T>>::value && ghidra_is_numcell<C>, int> = 0>
inline auto operator*(const C &a, T b) {
	return ghidra_num<std::decay_t<T>>(a) * b;
}
template <class T, class C,
	std::enable_if_t<std::is_floating_point<std::decay_t<T>>::value && ghidra_is_numcell<C>, int> = 0>
inline auto operator/(T a, const C &b) {
	return a / ghidra_num<std::decay_t<T>>(b);
}
template <class T, class C,
	std::enable_if_t<std::is_floating_point<std::decay_t<T>>::value && ghidra_is_numcell<C>, int> = 0>
inline auto operator/(const C &a, T b) {
	return ghidra_num<std::decay_t<T>>(a) / b;
}

template <class A, class B, class Pred>
inline bool ghidra_rel(A a, B b, Pred pred) {
	using DA = std::decay_t<A>;
	using DB = std::decay_t<B>;
	constexpr bool ptr = std::is_pointer<DA>::value || std::is_pointer<DB>::value;
	constexpr bool f64 = std::is_same<DA, GhidraF64>::value || std::is_same<DB, GhidraF64>::value;
	constexpr bool cell = ghidra_is_numcell<DA> || ghidra_is_numcell<DB>;
	constexpr bool flt = std::is_floating_point<DA>::value || std::is_floating_point<DB>::value;
	if constexpr (ptr)
		return pred(ghidra_addr(a), ghidra_addr(b));
	else if constexpr (f64 && flt)
		return pred(ghidra_num<double>(a), ghidra_num<double>(b));
	else if constexpr (cell && flt) {
		if constexpr (std::is_same<DA, long double>::value || std::is_same<DB, long double>::value)
			return pred(ghidra_num<long double>(a), ghidra_num<long double>(b));
		else if constexpr (std::is_same<DA, double>::value || std::is_same<DB, double>::value)
			return pred(ghidra_num<double>(a), ghidra_num<double>(b));
		else
			return pred(ghidra_num<float>(a), ghidra_num<float>(b));
	} else
		return pred(a, b);
}

template <class A, class B>
inline bool ghidra_lt(A a, B b) {
	return ghidra_rel(a, b, [](auto x, auto y) { return x < y; });
}
template <class A, class B>
inline bool ghidra_gt(A a, B b) {
	return ghidra_rel(a, b, [](auto x, auto y) { return x > y; });
}
template <class A, class B>
inline bool ghidra_le(A a, B b) {
	return ghidra_rel(a, b, [](auto x, auto y) { return x <= y; });
}
template <class A, class B>
inline bool ghidra_ge(A a, B b) {
	return ghidra_rel(a, b, [](auto x, auto y) { return x >= y; });
}
template <class A, class B>
inline bool ghidra_eq(A a, B b) {
	return ghidra_rel(a, b, [](auto x, auto y) { return x == y; });
}
template <class A, class B>
inline bool ghidra_ne(A a, B b) {
	return ghidra_rel(a, b, [](auto x, auto y) { return x != y; });
}

template <class T>
inline unsigned in(T) { return 0; }
template <class T, class U>
inline void out(T, U) {}

// Win32 import thunks and the image relocation pass used by the wasm build.
void ghidra_register(uint32_t va, void *fn);
// ret matches GhidraRet: 0 i32, 1 f32, 2 void.
void ghidra_note_fn(void *fn, int ret);
void ghidra_relocate();
uintptr_t efw_imp_dispatch(const char *name, int argc, uintptr_t *args);

template <class T>
inline uintptr_t efw_bits(T x) {
	if constexpr (std::is_pointer<T>::value)
		return (uintptr_t)x;
	else if constexpr (std::is_floating_point<T>::value) {
		float f = (float)x;
		uint32_t b = 0;
		std::memcpy(&b, &f, 4);
		return b;
	} else if constexpr (std::is_integral<T>::value)
		return (uintptr_t)(uint32_t)x;
	else
		return (uintptr_t)(uint32_t)(int)x;
}

template <class... A>
inline uintptr_t efw_imp(const char *name, A... a) {
	if constexpr (sizeof...(A) == 0)
		return efw_imp_dispatch(name, 0, nullptr);
	else {
		uintptr_t args[] = {efw_bits(a)...};
		return efw_imp_dispatch(name, (int)sizeof...(A), args);
	}
}
