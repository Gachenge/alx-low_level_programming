#include "main.h"

/**
 * _islower - checks for lowercase character
 * 
 * Return: depends
 */

int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
		c = 1;
	else
		c = 0;
}
