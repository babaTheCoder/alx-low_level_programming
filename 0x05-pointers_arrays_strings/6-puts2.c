#include "main.h"
#include <stdio.h>

/**
 * puts2 - function should print only one character of two
 *
 * @str : input
 *
 * Return : print
 */

void puts2(char *str)
{
	int long1 = 0;
	int t = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		long1++;
	}
	t = long1 - 1;
	for (x = 0; x <= t; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
