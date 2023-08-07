#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
 * create_file -  a function that creates a file.
 *
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: an int (0, 1 or -1)
 */

int create_file(const char *filename, char *text_content)
{
	int fileptr;
	ssize_t len = 0;
	ssize_t writeb;


	if (filename == NULL)
		return (-1);


	fileptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fileptr == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		writeb = write(fileptr, text_content, len);

		if (writeb != len)
		{
			close(fileptr);
			return (-1);
		}
	}

	close(fileptr);

	return (1);
}
