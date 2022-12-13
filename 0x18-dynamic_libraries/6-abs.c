#include "main.h"

/**
 * _abs - compute the absolute value
 * @x: input
 * Return: integer
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = (x * -1);
	}
	else if (x > 0)
	{
		x = x;
	}
	else if (x == 0)
	{
		x = 0;
	}
	return (x);
}
