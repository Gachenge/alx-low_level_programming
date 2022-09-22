#include "main.h"

/**
 * cap_string - capitalise every first letter
 * @str: string
 * Return: always 0
 */

char *cap_string(char *str)
{
	int i;

for (i = 0;  str[i] != '\0'; i++)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	else if (str[i] == ' ')
	{
		++i;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	else if (str[i] == '.')
	{
		++i;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else
			continue;
	}
}
	return (0);
}
