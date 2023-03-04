#include "main.h"
#include <stdio.h>

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 *
 * @s: initial string
 * @accept: substring to search
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	if (!accept[j])
	{
		break;
	}
	}


	return (count);

}
