#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 *
 * @dest: destination of copied bytes
 * @src: source of copied bytes
 * @n: number of bytes to copy
 *
 * Return: pointer of type char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (n <= 0)
	{
		return (dest);
	}

	while (i < n)
	{
		*(dest + i) = *(src + i);

		i++;
	}

	return (dest);

}
