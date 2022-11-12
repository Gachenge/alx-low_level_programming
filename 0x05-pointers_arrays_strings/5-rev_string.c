#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 */
void rev_string(char *s)
{
	int i, len, temp;

	len = 0;
	while (s[len])
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i -1];
		s[len - i - 1] = temp;
	}
}
