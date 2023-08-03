#include "main.h"

/**
 * get_bit - returns the value of a bit at a given position
 *
 * @n: number to traverse
 *
 * @index: given index
 *
 * Return: digit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
