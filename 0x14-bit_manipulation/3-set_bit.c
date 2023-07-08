#include <stdio.h>
#include "main.h"

/**
 * set_bit - set bit at a given index to 1
 *
 * @n: pointer to number
 * @index: index to modify
 *
 * Return: -1 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	set = 1UL << index;

	*n |= set;

	return (1);
}
