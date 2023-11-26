#ifndef varfun_h
#define varfun_h
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct bomba - Bomba
 * @f: Bomba
 * @format: Bomba
 */
typedef struct bomba
{
	void (*f)(va_list);
	char format;
} bomba;

#endif
