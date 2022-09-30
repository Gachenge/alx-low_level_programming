#include "main.h"

/**
 * _namer - print its name
 * @argc: many elements
 * @argv: string array
 * Return: 0 for null
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf ("%s\n" ,argv[i]);
	return (0);
}
