#include "main.h"

/**
 * _islower - checks for lowercase character
 * c_islower: is it?
 * int c: entered from main function
 * Description: 'program'
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
