#include "main.h"
#include <stdio.h>

/**
 * _strstr -  a function that locates a substring.
 *
 * @haystack: string to be searched
 * @needle: substring to search for
 *
 * Return: pointer to located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *h_ptr, *n_ptr, *match;

	for (h_ptr = haystack; *h_ptr != '\0'; h_ptr++)
	{
		match = h_ptr;
		n_ptr = needle;
		while (*n_ptr != '\0' && *n_ptr == *match)
		{
			n_ptr++;
			match++;
		}
		if (*n_ptr == '\0')
		{
			return (h_ptr);
		}
	}
	return (NULL);
}
