#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates 2 strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of chars to append
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenDest = 0;
	int lenSrc = 0;
	int i = 0;

	for (i = 0; dest[i] != '\0'; i++)
		lenDest++;
	for (i = 0; src[i] != '\0'; i++)
		lenSrc++;
	for (i = 0; i < n; i++)
		dest[lenDest + i] = src[i];

	return (dest);
}

