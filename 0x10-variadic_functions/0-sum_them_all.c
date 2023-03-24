#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - adds all arguments of the func
 *
 * @n: number of arguments
 * @...: variable number of args
 *
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum  = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
