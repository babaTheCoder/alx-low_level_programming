#include "main.h"

/**
 * clear_bit - changes the bit at a given index to 0
 *
 * @n: pointer to the number to modify
 * @index: index of bit to change
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
