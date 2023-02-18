#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: Print small letters of alphabet
 * Return: Zero value to succesful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	};
	putchar("\n");
	return (0);
}
