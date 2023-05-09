#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: name of file
 *
 * @text_content: content of file
 *
 * Return: 0, 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filer;
	int writeb;

	if (filename == NULL || text_content == NULL)
		return (-1);

	filer = open(filename, O_WRONLY | O_APPEND);

	if (filer == -1)
		return (-1);

	writeb = write(filer, text_content, strlen(text_content));

	if (writeb == -1)
	{
		close(filer);
		return (-1);
	}

	close(filer);
	return (1);
}
