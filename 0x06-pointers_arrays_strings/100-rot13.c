#include "main.h"

/**
 * rot13 - light encryption
 * @str: string to be encoded
 * Return: always 0
 */

char *rot13(char *str)
{
	char arr1[] = "ABCDEFGHIJKLMabcdefghijklm";
	/*char arr2[] = "NOPQRSTUVWXYZnopqrstuvwxyz";*/
	int j, i = 0;

	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
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
		i++;
	}
	return (str);
}
