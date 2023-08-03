#include "main.h"

/**
 * binary_to_uint - convert a binary digit to an decimal number
 *
 * @b: binary number to convert
 *
 * Return: decimal number or 0 on failure
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
			converted = (coverted << 1) + 1;
		}
		else
			return (0);

		b++;
	}
	return (converted);
}
