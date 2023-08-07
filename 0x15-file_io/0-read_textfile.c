#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile -  a function that reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: name of file
 * @letters: size of letters to write
 *
 * Return: 0 or 1
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int filer;
	ssize_t readb, writeb;

	buff = malloc(letters + 1);



	if (filename == NULL)
		return (0);

	filer = open(filename, O_RDONLY);

	if (filer == -1)
		return (0);

	readb = read(filer, buff, letters);

	if (readb == -1)
	{
		close(filer);
		return (0);
	}

	buff[readb] = '\0';

	writeb = write(STDOUT_FILENO, buff, readb);

	if (writeb == -1)
	{
		close(filer);
		return (0);
	}

	close(filer);
	return (writeb);
}
