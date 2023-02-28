#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line
 *
 * @s : string to be reversed
 *
 * Return : void or nothing
 */

void print_rev(char *s)
{
	int normstr = 0;
	int i;

	while (*s != '\0')
	{
		normstr++;
		s++;
	}
	s--;
	for (i = normstr; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
