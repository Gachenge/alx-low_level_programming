#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char buff[1024];
	int file_from, file_to, c, x;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (!file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (!file_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (c >= 1024)
	{
		c = read(file_from, buff, 1024);
		if (c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(file_from);
			close(file_to);
			exit(98);
		}
		x = write(file_to, buff, c);
		if (x == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}
	}
		close(file_to);

		close(file_from);

	return (0);
}
