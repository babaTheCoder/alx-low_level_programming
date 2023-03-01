#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest : first string to be concatenated
 * @src : second string to be concatenated
 *
 * Return : concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = strlen(dest);

	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
