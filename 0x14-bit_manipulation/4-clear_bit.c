#include <stdio.h>
#include "main.h"

/**
 * clear_bit - changes the bit a given index to 0
 *
 * @n: pointer to given number
 * @index: index to modify bit at
 *
 * Return: 1 or -1
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
