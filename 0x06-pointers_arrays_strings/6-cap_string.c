#include "main.h"

/**
 * cap_string - capitalise every first letter
 * @str: string
 * Return: always 0
 */

char *cap_string(char *str)
{
	int i;

while (str[i] == '\0')
{
	if (str[i] == 0 ||
		str[i] == ' ' ||
		str[i] == '.')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	i++;
}
return (str);
}
