#include "main.h"
/**
 * _close - close the open
 * @opn: open
 */

void _close(int opn)
{
	int err;

	err = close(opn);
	if (err == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", opn);
		exit(100);
	}
}

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
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (!file_from)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (!file_to)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (c >= 1024)
	{
		c = read(file_from, buff, 1024);
		if (c == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			_close(file_from);
			_close(file_to);
			exit(98);
		}
		x = write(file_to, buff, c);
		if (x == -1)
		{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}
	}
		_close(file_to);
		_close(file_from);
	return (0);
}
