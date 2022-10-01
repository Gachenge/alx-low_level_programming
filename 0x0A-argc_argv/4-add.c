#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - not the snake
 * @argc: integers
 * @argv: vector
 * Return: sum
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (!isdigit(argv[j][i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[j]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
