#include "main.h"

/**
 * rot13 - light encryption
 * @str: string to be encoded
 * Return: always 0
 */

char *rot113(char *str)
{
	char arr1[] = "ABCDEFGHIJKLMabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == arr1[j])
			{
				str[i] += 13;
				break;
			}
			else
			{
				str[i] -= 13;
				break;
			}
		}
	}
	return (str);
}
