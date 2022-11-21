#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, num;

	while (i < 50)
	{
		printf("%d", i);
		num = i + j;
		i = j;
		j = num;
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
