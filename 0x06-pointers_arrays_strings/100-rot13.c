#include "main.h"

/**
 * rot13 - light encryption
 * @str: string to be encoded
 * Return: always 0
 */

char *rot13(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) < 'n')
			*(str + i) += 13;
		else if (*(str + i) >= 'n' && *(str + i) <= 'z')
			*(str + i) -= 13;
	}
	return (str);
}
