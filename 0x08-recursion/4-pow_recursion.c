#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the val of x raised to power y
 *
 * @x : first integer
 * @y : power or exponent
 *
 * Return: val of x exponetnt y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
