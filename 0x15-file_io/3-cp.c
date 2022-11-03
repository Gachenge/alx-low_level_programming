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
 * _buffer - create a buffer
 * @buf: the arg
 * Return: 0
 */

char *_buffer(char *buf)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(2, "Error: Can't write to %s\n", buf);
		exit(99);
	}
	return (buffer);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int file_from, file_to, c, x;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = _buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	c = read(file_from, buffer, 1024);

	do {
		if (file_from == -1 || c == -1)
		{
			dprintf(2, "Error: Can't read file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		x = write(file_to, buffer, c);
		if (file_to == -1 || x == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		c = read(file_from, buffer, 1024);
		file_to  = open(argv[2], O_WRONLY | O_APPEND);
	} while (c > 0);

	free(buffer);
	_close(file_from);
	_close(file_to);
	return (0);
}
