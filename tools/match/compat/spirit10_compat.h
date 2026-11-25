/* Forced include for compiling Spirit of Half-Life 1.0 with g++ on Linux. */
#ifndef SPIRIT10_COMPAT_H
#define SPIRIT10_COMPAT_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <sys/stat.h>
#include <unistd.h>
#ifdef __cplusplus
#include <new>
#endif
#ifndef _MAX_PATH
#define _MAX_PATH 260
#endif
#ifndef MAX_PATH
#define MAX_PATH 260
#endif
#ifdef __cplusplus
class CException { public: void Delete() {} };
#endif
static inline char *strupr(char *s) { for (char *p = s; *p; p++) *p = (char)toupper(*p); return s; }
#endif
