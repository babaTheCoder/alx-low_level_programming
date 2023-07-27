#include "main.h"

/**
 * read_textfile - Reads the content of a text file and prints
 * out to standard output
 *
 * @filename: name of textfile to be read from
 * @letters: number of letters in file to be read
 *
 * Return: number of bytes in file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *buffer;
	ssize_t written, reader;

	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}

	reader = read(file_desc, buffer, letters);
	if (reader == -1)
	{
		free(buffer);
		free(file_desc);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, reader);

	free(buffer);
	close(file_desc);

	return (written);
}
