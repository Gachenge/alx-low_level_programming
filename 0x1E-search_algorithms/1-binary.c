#include "search_algos.h"
/**
* binary_search - divide and conquer search pattern
* @array: the data
* @size: size of the array
* @value: the value to search for
* Return: the index
*/
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int mid;
	int i;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
