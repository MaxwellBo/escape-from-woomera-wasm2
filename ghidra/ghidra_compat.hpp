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

// Listings spell a function pointer `code *`. The compiler rewrites that to
// CodePtr so the pointer value itself is what gets called.
struct CodePtr {
	uintptr_t fn;
	CodePtr() : fn(0) {}
	CodePtr(uintptr_t f) : fn(f) {}
	CodePtr(unsigned f) : fn(f) {}
	CodePtr(int f) : fn((uintptr_t)(unsigned)f) {}
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
	uintptr_t operator()(A... a) const {
		using Fn = uintptr_t (*)(A...);
		return reinterpret_cast<Fn>(fn)(a...);
	}
	const CodePtr &operator*() const { return *this; }
	explicit operator int() const { return (int)fn; }
	operator void *() const { return (void *)fn; }
};
using code = CodePtr;

// Call a decompiled function without checking its recovered signature.
// Ghidra's calls and definitions disagree about return type and arity.
template <class F, class... A>
uintptr_t ghidra_invoke(F fn, A... a) {
	using Fn = uintptr_t (*)(A...);
	return reinterpret_cast<Fn>(fn)(a...);
}

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
	GStruct(int x) : GStruct() { v = (unsigned)x; }
	GStruct(unsigned x) : GStruct() { v = x; }
	GStruct(long x) : GStruct() { v = (unsigned)x; }
	GStruct(unsigned long x) : GStruct() { v = (unsigned)x; }
	GStruct(long long x) : GStruct() { v = (unsigned)x; }
	GStruct(unsigned long long x) : GStruct() { v = (unsigned)x; }
	GStruct(float x) : GStruct() { std::memcpy(&v, &x, 4); }
	GStruct(double x) : GStruct() { float f = (float)x; std::memcpy(&v, &f, 4); }
	GStruct(long double x) : GStruct() { float f = (float)x; std::memcpy(&v, &f, 4); }
	template <class T, class = std::enable_if_t<std::is_pointer<T>::value>>
	GStruct(T p) : GStruct() { v = (unsigned)(uintptr_t)p; }
	operator int() const { return (int)v; }
	explicit operator unsigned() const { return v; }
	explicit operator unsigned long() const { return v; }
	explicit operator void *() const { return (void *)(uintptr_t)v; }
	explicit operator bool() const { return v != 0; }
	// Listings use `->` on typedefs that are values here (PEXCEPTION_RECORD).
	GStruct *operator->() { return this; }
	const GStruct *operator->() const { return this; }
	unsigned operator&(unsigned x) const { return v & x; }
	unsigned operator|(unsigned x) const { return v | x; }
	unsigned operator^(unsigned x) const { return v ^ x; }
	unsigned operator+(unsigned x) const { return v + x; }
	unsigned operator-(unsigned x) const { return v - x; }
	unsigned operator*(unsigned x) const { return v * x; }
	unsigned operator/(unsigned x) const { return x ? v / x : 0; }
	unsigned operator%(unsigned x) const { return x ? v % x : 0; }
	unsigned operator<<(unsigned x) const { return v << (x & 31); }
	unsigned operator>>(unsigned x) const { return v >> (x & 31); }
	unsigned operator~() const { return ~v; }
	GStruct &operator+=(unsigned x) { v += x; return *this; }
	GStruct &operator-=(unsigned x) { v -= x; return *this; }
	GStruct &operator|=(unsigned x) { v |= x; return *this; }
	GStruct &operator&=(unsigned x) { v &= x; return *this; }
	GStruct &operator^=(unsigned x) { v ^= x; return *this; }
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
	AnyPtr operator+(int n) const { return AnyPtr{(char *)p + n}; }
	AnyPtr operator-(int n) const { return AnyPtr{(char *)p - n}; }
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
	unsigned operator&(unsigned x) const { return (unsigned)fn & x; }
	unsigned operator|(unsigned x) const { return (unsigned)fn | x; }
	unsigned operator<<(unsigned n) const { return (unsigned)fn << (n & 31); }
	unsigned operator>>(unsigned n) const { return (unsigned)fn >> (n & 31); }
	friend unsigned operator&(unsigned a, const Call &c) { return a & (unsigned)c.fn; }
	friend unsigned operator|(unsigned a, const Call &c) { return a | (unsigned)c.fn; }
	friend unsigned operator<<(unsigned a, const Call &c) { return a << ((unsigned)c.fn & 31); }
	template <class... A>
	uintptr_t operator()(A... a) const {
		using Fn = uintptr_t (*)(A...);
		return reinterpret_cast<Fn>(fn)(a...);
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
	template <class T>
	CellLvalue &operator=(T v);
	template <class... A>
	uintptr_t operator()(A... a) const {
		using Fn = uintptr_t (*)(A...);
		return reinterpret_cast<Fn>((uintptr_t)bits())(a...);
	}
};

// One byte of the original image. Its address is the symbol's address.
struct GhidraCell {
	unsigned char raw;
	AnyPtr operator&() { return AnyPtr{this}; }
	uintptr_t operator+(intptr_t n) const { return (uintptr_t)this + (uintptr_t)n; }
	uintptr_t operator-(intptr_t n) const { return (uintptr_t)this - (uintptr_t)n; }
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

struct SCell {
	char c;
	operator char *() const { return (char *)this; }
	operator unsigned char *() const { return (unsigned char *)this; }
	operator void *() const { return (void *)this; }
	operator int() const { return (int)(uintptr_t)this; }
	char operator[](int i) const { return ((char *)this)[i]; }
	char *operator+(int n) const { return (char *)this + n; }
	AnyPtr operator&() { return AnyPtr{(void *)this}; }
};

extern unsigned char ghidra_image[];
extern unsigned ghidra_image_size;

template <class T>
inline T &gh_at(uintptr_t addr) {
	if (addr >= 0x10000000u) {
		uintptr_t off = addr - 0x10000000u;
		if (off < ghidra_image_size)
			return *reinterpret_cast<T *>(ghidra_image + off);
	}
	static unsigned char low[65536];
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
	int3(unsigned x) : v(x & 0xffffffu) {}
	int3(int x) : v((unsigned)x & 0xffffffu) {}
	int3(unsigned long x) : v((unsigned)x & 0xffffffu) {}
	int3(unsigned long long x) : v((unsigned)x & 0xffffffu) {}
	operator unsigned() const { return v; }
};
struct uint3 {
	unsigned v;
	uint3() : v(0) {}
	uint3(unsigned x) : v(x & 0xffffffu) {}
	uint3(int x) : v((unsigned)x & 0xffffffu) {}
	uint3(unsigned long x) : v((unsigned)x & 0xffffffu) {}
	uint3(unsigned long long x) : v((unsigned)x & 0xffffffu) {}
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

template <class T>
inline unsigned in(T) { return 0; }
template <class T, class U>
inline void out(T, U) {}
