#include "main.h"

/**
 * get_bit - bit at index
 * @n: the number
 * @index: position
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
