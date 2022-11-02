#include "main.h"
/**
 * read_textfile - read a file and write its contest to posix
 * @filename: pointer to the file
 * @letters: count the characters
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, w, r;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(0);
	return (w);
}
