#include "main.h"

/**
 * clear_bit - clear nth bit
 * @n: the number
 * @index: at position
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
