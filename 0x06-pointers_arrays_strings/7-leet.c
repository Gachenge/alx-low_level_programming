#include "main.h"
 /**
  * leet(char *) - ati ni mozart
  * *leet - ati hauko
  * @str: string
  * Return: music
  * ?
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
			if (str[j] == arr[j] || str[j] == arr1[j])
			{
				str[j] = eet[j];
				break;
			}
		}
	}
	return (str);
}

