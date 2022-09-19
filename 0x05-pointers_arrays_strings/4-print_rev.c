#include "main.h"

/**
 * print_rev - reverse a string
 * @s: string input
 * Return: always 0
 */

void print_rev(char *s)
{
	int i = 0;
	int length = 0;
	char temp, *end, *start;

while (*s != '\0')
{
	length++;
	s++;
}
for (i = 0; i < length - 1; i++)
{
	end++;
	}
	for (i = 0; i < length / 2; i++)
{
	temp = *end;
	*end = *start;
	*start = temp;
	start++;
	end--;
}
}
