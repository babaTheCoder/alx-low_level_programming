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
	unsigned int i;

	arrn = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		arrn[i] = c;
	}

	if (size == 0 || arrn == NULL)
	{
		return (NULL);
	}


	return (arrn);

}
