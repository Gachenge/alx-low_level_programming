#include <stdio.h>
/**
 * main - print all hexa numbers
 *
 * Return: sweet nothing
 */
int main(void)
{
	int i;
	char x;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');

	}
	for (x = 'a'; x <= 'f'; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
	}

