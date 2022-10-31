#include "main.h"

/**
 * get_endianness - if little or big
 * Return: 0
 */

int get_endianness(void)
{
	unsigned int x =1;
	char *c = (char*) & x;
	return (int) * c;
}
