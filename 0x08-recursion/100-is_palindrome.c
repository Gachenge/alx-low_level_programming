#include "main.h"

/**
 * _pali - check for palindrome
 * @s: the string
 * @l: left of string
 * @r: right of string
 * Return: 1 or 0
 */

int _pali(char *s, int l, int r)
{
	if (!s || l < 0 || r < 0)
		return (0);
	else if (l >= r)
		return (1);
	else if (s[l] != s[r])
		return (0);
	else
		return (_pali(s, l + 1, r - 1));
}

/**
 * _length - length of string
 * @s: the string
 * Return: 0
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _length(s + 1));
}

/**
 * is_palindrome - check for palindrome
 * @s: the string
 * Return: answer
 */

int is_palindrome(char *s)
{
	int i;

	i = _length(s) - 1;
	return (_pali(s, 0, i));
}
