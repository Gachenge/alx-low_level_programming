#include "main.h"

/**
 * swap_int - swaps values
 * @a: first pointer
 * @b: second
 * Return: nought
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
