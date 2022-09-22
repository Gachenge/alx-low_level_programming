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
	i++;
	if (str[i - 1] == 0 ||
		str[i - 1] == ' ' ||
		str[i - 1] == '.')
			str[i] = str[i] - 32;
	}
return (str);
}
