#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a : first integer
 * @b : second integer
 *
 * Return: 0 0r 1
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

