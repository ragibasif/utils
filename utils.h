#ifndef __UTILS_H__
#define __UTILS_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <ctype.h> /* size_t*/
#include <stdarg.h>
#include <stdbool.h> /* true, false, bool */
#include <stdio.h> /*Includes the standard I/O library for functions like `printf`.*/
#include <stdlib.h> /*Includes the standard library for functions like `malloc`, `free`, and `realloc`.*/
#include <string.h> /*Includes the string manipulation library for functions like `memcpy`.*/
#include <time.h> /*time*/

/*ANSI color codes for printing colored text in C projects.*/

/*Macros defining color codes.*/
#define UTILS_ANSI_RED "\x1b[91m"
#define UTILS_ANSI_GREEN "\x1b[92m"
#define UTILS_ANSI_YELLOW "\x1b[93m"
#define UTILS_ANSI_MAGENTA "\x1b[95m"
#define UTILS_ANSI_BOLD "\x1b[1m"
#define UTILS_ANSI_RESET "\x1b[0m"

#define UTILS_PI 3.14159265359
#define UTILS_ABS(val) ((val) < 0) ? -(val) : (val)
#define UTILS_AREA(l, w) (l * w)
#define UTILS_AVERAGE(val1, val2) (((double)(val1) + (val2)) / 2.0)

#define UTILS_BIT_CHK(bit, reg) ((reg >> (bit)) & 1)
#define UTILS_BIT_CLR(value, bit) ((value) &= ~(1L << (bit)))
#define UTILS_BIT_LSB(reg) ((reg) & 1)
#define UTILS_BIT_SET(value, bit) ((value) |= (1L << (bit)))

#define UTILS_CIRCUMFERENCE(radius)                                            \
  (UTILS_PI * radius * radius) // circle circumference
#define UTILS_IN_RANGE(x, lo, hi)                                              \
  (((x > lo) && (x < hi)) || (x == lo) || (x == hi))
#define UTILS_IS_EVEN(x) ((x) % 2 == 0)
#define UTILS_IS_ODD(x) (x & 1)
#define UTILS_MAX_INT(x, y) (x > y ? x : y)
#define UTILS_MIN_INT(x, y) (x < y ? x : y)
#define UTILS_OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE)0)->ELEMENT))
#define UTILS_PERCENT(val, per) ((val)\* (per) / 100.0)
#define UTILS_RAND_INT(min, max) ((rand() % (int)(((max) + 1) - (min))) + (min))
#define UTILS_SIZE(x) (sizeof(x) / sizeof(x[0]))
#define UTILS_SUM(a, b) (a + b)

#define UTILS_PRINT_CHAR(x) printf("%c", x) // print char
#define UTILS_PRINT_STR(x) printf("%s", x)  // print string of characters

#define UTILS_SCAN_INT(x) scanf("%d", &x)     // int
#define UTILS_SCAN_SHORT(x) scanf("%hd", &x)  // short int
#define UTILS_SCAN_LINT(x) scanf("%ld", &x)   // lont int
#define UTILS_SCAN_LLINT(x) scanf("%lld", &x) // long long int
#define UTILS_SCAN_OCT(x) scanf("%o", &x)     // octal
#define UTILS_SCAN_HEX(x) scanf("%x", &x)     // hexadecimal
#define UTILS_SCAN_UINT(x) scanf("%u", &x)    // unsigned int

#define UTILS_PRINT_INT(x) printf("%d", x)     // int
#define UTILS_PRINT_SHORT(x) printf("%hd", x)  // short int
#define UTILS_PRINT_LINT(x) printf("%ld", x)   // lont int
#define UTILS_PRINT_LLINT(x) printf("%lld", x) // long long int
#define UTILS_PRINT_OCT(x) printf("%o", x)     // octal without leading zeros
#define UTILS_PRINT_HEX(x) printf("%x", x)     // hexadecimal
#define UTILS_PRINT_UINT(x) printf("%u", x)    // unsigned int

#define UTILS_SCAN_FLOAT(x) scanf("%f", &x)    // float
#define UTILS_SCAN_DOUBLE(x) scanf("%lf", &x)  // double
#define UTILS_SCAN_LDOUBLE(x) scanf("%Lf", &x) // long double
#define UTILS_SCAN_FLOATEXP(x) scanf("%e", &x) // floating point exponent

#define UTILS_PRINT_FLOAT(x) printf("%f", x)    // float
#define UTILS_PRINT_DOUBLE(x) printf("%lf", x)  // double
#define UTILS_PRINT_LDOUBLE(x) printf("%Lf", x) // long double
#define UTILS_PRINT_FLOATEXP(x) printf("%e", x) // floating point exponent

#define UTILS_SWAP(Type, x, y)                                                 \
  do {                                                                         \
    Type *a = &(x);                                                            \
    Type *b = &(y);                                                            \
    Type t = *a;                                                               \
    *a = *b;                                                                   \
    *b = t;                                                                    \
  } while (0)

#define UTILS_LOG(msg) utils_log_wrapper(msg, __FILE__, __LINE__, __func__)

extern void utils_log_wrapper(const char *message, const char *file,
                              const unsigned int line, const char *function);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __UTILS_H__
