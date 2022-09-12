#include <stdio.h>
/**
 * main - start the prog
 *
 * Return: end
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			continue;
		}
		putchar (x);
	}
	putchar('\n');
	return (0);
}

