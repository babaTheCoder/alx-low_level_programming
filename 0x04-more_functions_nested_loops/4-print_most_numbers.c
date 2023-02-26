#include "main.h"

/*
 * print_most_numbers - print all digits except 2 and 4
 *
 * Returns: void
 */

void print_most_numbers(void)
{
	char c;

	while (c <= '9')
	{
		if (c != '2' || c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');

}
