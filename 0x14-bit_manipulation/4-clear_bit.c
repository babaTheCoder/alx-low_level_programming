#include <stdio.h>
#include "main.h"

/**
 * clear_bit - changes the bit at a giben index to 0
 *
 * @n: pointer to given number
 * @index: index of given bit
 *
 * Return: 1 on success or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int zero;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	zero = ~(1UL << index);

	*n &= zero;

	return (1);
}
