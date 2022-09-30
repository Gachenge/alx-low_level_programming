#include <stdio.h>

/**
 * print - print all
 * @argc: integers
 * @argv: string
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
