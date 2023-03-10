#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that writes a string, followed by a new line to stdou
 *
 * @str : string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
