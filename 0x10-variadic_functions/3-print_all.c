#include "variadic_functions.h"

/**
 * print_c - print character
 * @c: the character
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - print integer
 * @i: the integer
 */

void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - print float
 * @f: the float
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

void print_str(va_list s)
{
	if (!s)
		printf("(nil)");
	printf("%s", va_arg(s, char*));
}

/** print_all - print every
 * @format: formater
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int i, j;

	print_t myArray[5] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_str},
		{NULL, NULL}
	};

	va_list var;
	char *separator = "";

	va_start(var, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;

		while (myArray[j].t)
		{
			if (*(myArray[j].t) == format[i])
			{
				printf("%s", separator);
				myArray[j].f(var);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(var);
	printf("\n");
}
