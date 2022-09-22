#include "main.h"

/**
  * leet - mozart music
  * @str: string
  * Return: nothing
  */

char *leet(char *str)
{
	int i, j;
	char arr[] = "aeotl";
	char arr1[] = "AEOTL";
	char eet[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			if (str[i] == arr[j] || str[i] == arr1[j])
			{
				str[i] = eet[j];
				break;
			}
		}
	}
	return (str);
}

