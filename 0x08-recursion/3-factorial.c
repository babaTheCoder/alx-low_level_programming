#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of an integer
 *
 * @n : integer to return factorial
 *
 * Return : -1 or 1 or  factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
