#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * adder - not the snake
 * @argc: integers
 * @argv: vector
 * Return: sum
 */

int main(int argc, char *argv[])
{
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf ("%d\n", sum);
	return (0);
}
