#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 *
 * @str: given parameter
 *
 * Return: pointer to newly allocated space
 */

char *_strdup(char *str)
{
	int length;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);
	duplicate = (char *)malloc(length + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
