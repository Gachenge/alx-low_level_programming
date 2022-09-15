#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: input to the program
 * Return: a one a two three ..
 */

int _isdigit(int c)
{
	int x;

	if (c >= 0 && c <= 9)
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}
