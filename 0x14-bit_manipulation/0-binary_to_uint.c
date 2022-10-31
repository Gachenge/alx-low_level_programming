#include "main.h"
/**
 * _len - how long
 * @x: the num
 * Return: length
 */

int _len(const char x[])
{
	int i = 0;

	while (x[i])
		i++;
	return (i);
}
/**
 * binary_to_uint - converter
 * @b: binary pointer
 * Return: the conversion
 */

unsigned int binary_to_uint(const char *b)
{
	int i, tot = 0, dec = 1;
	if(!b)
		return(0);

	for (i = _len(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			tot += dec;
		dec *= 2;
		if (b[i] > '1' || b[i] < '0')
			return (0);
	}
	return (tot);
}
