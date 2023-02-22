#include "main.h"

/**
 * print_alphabet_x10 - prints the English alphaabet a-z 10 times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char i;

	while (i < 10)
	{
		char c;
		
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
