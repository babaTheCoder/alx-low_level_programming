#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 *
 * @str : string to be halved
 *
 * Return : half of input
 */

void puts_half(char *str)
{
	int a, n, longer;

	longer = 0;

	for (a = 0; str[a] != '\0'; a++)
		longer++;
	n = (longer / 2);

	if ((longer % 2) == 1)
		n = ((longer + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
