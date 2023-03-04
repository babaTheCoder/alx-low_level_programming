#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string for any set of bytes
 *
 * @s: string to search
 * @accept: bytes to search
 *
 * Return: pointer to the found bytes
 */

char *_strpbrk(char *s, char *accept)
{
	char *s_ptr, *a_ptr;

	for (s_ptr = s; *s_ptr != '\0'; s_ptr++)
	{
		for (a_ptr = accept; *a_ptr != '\0'; a_ptr++)
		{
			if (*s_ptr == *a_ptr)
			{
				return (s_ptr);
			}
		}
	}
	return (NULL);

}
