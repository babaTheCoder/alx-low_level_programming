#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 *
 * @n: number to be flipped
 * @m: flipped number
 *
 * Return: count of flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sub;
	unsigned int i = 0;

	sub = n ^ m;

	while (sub)
	{
		i += sub & 1;
		sub >>= 1;
	}

	return (i);
}
