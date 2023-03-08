#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints reverse of a string
 *
 * @s : string to be reversed
 *
 * Return : void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
