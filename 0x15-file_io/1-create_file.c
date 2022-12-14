#include "main.h"

/**
 * create_file - create a new file
 * @filename: the file
 * @text_content: write this
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, w, o;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
