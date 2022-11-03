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
	buffer = _buffer(argv[1]);
	file_from = open(argv[1], O_RDONLY);
	c = read(file_from, buffer, 1024);

	if (file_from == -1 || c == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		_close(file_from);
		exit(98);
	}
	file_to = open(argv[2], O_TRUNC | O_CREAT | O_RDWR, 0664);

	x = write(file_to, buffer, c);
	if (x == -1 || file_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		free(buffer);
		_close(file_to);
		exit(99);
	}
	while (c > 0)
	{
		c = read(file_from, buffer, 1024);
		x = write(file_to, buffer, c);
	}
	free(buffer);
	_close(file_to);
	_close(file_from);
	return (0);
}
