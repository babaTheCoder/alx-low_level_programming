#include "main.h"
#include <stdio.h>

/*
 * _strlen - function that generates
 *
 * @s : string to be checked
 *
 * Return: s
 */

int _strlen(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
}
