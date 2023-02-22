#include "main.h"

/**
 * _islower - checks whether a letter is in lower caps or not
 *
 *@c: character to test
 *
 * Return: 1 if lower case else zero
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
