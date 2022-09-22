#include "main.h"

/**
 * string_toupper - change to uppercase
 * Return: zic
 * .
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 'a' && str[1] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else
			continue;
	return (str);
}
