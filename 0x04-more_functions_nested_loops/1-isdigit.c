#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: input to the program
 * Return: a one a two three ..
 */

int _isdigit(int c)
{

	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
