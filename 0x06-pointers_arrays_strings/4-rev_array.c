#include "main.h"

/**
 * reverse_array - reverses content of array of integers
 * @a: the array
 * @n: number of elements of the array
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
