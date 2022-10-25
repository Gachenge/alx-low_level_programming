#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdio.h>
#include <stdarg.h>
/**
 * struct print - print with specifier
 * @t: type
 * @f: function
 */

typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_H */
