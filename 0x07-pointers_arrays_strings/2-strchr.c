#include "main.h"
#include <stdio.h>

/**
 * _strchr - checks for the first occurence of a char in a string
 *
 * @s: string to search
 * @c: character to search
 *
 * Return: pointer to char c or NULL
 */

char *_strchr(char *s, char c)
{
	int lenstr = 0;
	int i = 0;

	while (s[lenstr] != '\0')
	{
		lenstr++;
	}

	for (i = 0; i <= lenstr; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
