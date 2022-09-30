#include <stdio.h>
#include <ctype.h>

/**
 * adder - not the snake
 * @argc: integers
 * @argv: vector
 * Return: sum
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (!isdigit(argc))
	{
		printf("Error\n");
		return (1);
	}
	else if (isdigit(argc))
	{
		for (i = 0; i < argc; i++)
			sum =+ atoi(argv[i]);
		printf ("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
