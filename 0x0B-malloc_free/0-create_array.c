#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of chars
 * @c: first character to initialize array
 *
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arrn;

	arrn = (char *) malloc(size * sizeof(char));
	arrn[0] = c;

	if (size == 0 || arrn == NULL)
	{
		return (NULL);
	}

	return (arrn);

}
