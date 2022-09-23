#include "main.h"

/**
 * rot13 - light encryption
 * @str: string to be encoded
 * Return: always 0
 */

char *rot13(char *str)
{

	int i, j;
	char arr1 [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2 [] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (((str[i] >= 'a' && str[i] <= 'z') || ( str[i] >= 'A' && str[i] <= 'Z')) && (str[i] == arr1[j]))
			{
				str[i] = arr2[j];
				break;
			}
		}
	}
	return (str);
}
