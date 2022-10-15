#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: between
 * @n: int
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i < n - 1)
			printf("%d%s", va_arg(ptr, int), separator);
	}
	printf("%d\n", va_arg(ptr, int));
	va_end(ptr);
}
