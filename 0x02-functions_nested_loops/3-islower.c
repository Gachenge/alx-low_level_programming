#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Description: 'checks the case'
 *
 * @c: input from main
 *
 * Return: depends
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		c = 1;
	else
		c = 0;
	return (c);
}
