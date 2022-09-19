#include "main.h"

/**
 * str_len - get string length
 * @ptr: pointer
 * Return: nothing
 */

int str_len(char *ptr)
{
	int i = 0;

	while (*(ptr + 1) != '\0')
		i++;
	return (i);
}
/**
 * rev_string - reverse the string
 * @s: input
 * Return: nothing
 */

void rev_string(char *s)
{
	int len, i;
	char *start, *end, temp;

	len = str_len(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
