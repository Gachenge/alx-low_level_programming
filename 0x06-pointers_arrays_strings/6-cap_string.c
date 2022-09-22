#include "main.h"

/**
 * cap_string - capitalise every first letter
 * @str: string
 * Return: always 0
 */

char *cap_string(char *str)
{
	int flag, i, j;
	char sep[] = ",\t; .\n!?()\"{}";

	for (i = 0; str[i] != '\0'; i++)
	{
		flag = 0;
		if (i == 0)
			flag = 1;
		else
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (str[i - 1] == sep[j])
				{
					flag = 1;
					break;
				}

			}
	}
	if (flag == 1)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
