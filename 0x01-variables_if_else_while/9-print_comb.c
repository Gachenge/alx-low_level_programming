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
		continue;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
