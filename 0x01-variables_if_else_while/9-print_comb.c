#include <stdio.h>
/**
 * main - printa all possible combos
 *
 * Return: nada
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
		num++;
	}
	return (0);
}
