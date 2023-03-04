#include "main.h"
#include <stdio.h>
/**
 * *_memset -  function fills the first n bytes of the memory area pointed
 *
 * @s: memory location to be filled
 * @b: character usedd to fill *S
 * @n: number of bits to fill
 *
 * Return: returns a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*s = b;
	}

	return (s);

}
