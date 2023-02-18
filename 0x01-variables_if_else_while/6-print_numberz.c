#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers from 0 to 9
 * Return: Zero value
 */

int main(void)
{
	int n;

	for (n = '1'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
