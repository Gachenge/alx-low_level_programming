#include <stdio.h>
/**
 * main - printa all possible combos
 *
 * Return: nada
 */

int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		putchar ((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
