#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	long i, j = 0, k = 1;
	long next = 1;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", next);
		j = k;
		k = next;
		next = j + k;
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
