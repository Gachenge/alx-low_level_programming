#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, num, sum = 0;

	while (i < 4000000)
	{
		if (i % 2 == 0)
			sum += i;
		num = i + j;
		i = j;
		j = num;
	}
	printf("%d\n", sum);
	return (0);
}
