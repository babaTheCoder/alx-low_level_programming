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
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
