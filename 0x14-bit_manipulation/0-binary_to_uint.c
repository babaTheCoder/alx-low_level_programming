#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - convert binary digit to an integer
 *
 * @b: binary digit to convert
 *
 * Return: converted number or 0 if failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
		{
			converted = (converted << 1);
		}
		else if (*b == '1')
		{
			converted = (converted << 1) + 1;
		}
		else
			return (0);

		b++;
	}

	return (converted);
}
