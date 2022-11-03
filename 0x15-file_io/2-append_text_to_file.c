#include "main.h"

/**
 * append_text_to_file - append text
 * @filename: the file
 * @text_content: the content
 * Return: 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, o, w;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
	}
	o = open(filename, O_WRONLY, O_APPEND);
	if (i > 0)
		w = write(o, text_content, i);
	else
		w = -1;
	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
