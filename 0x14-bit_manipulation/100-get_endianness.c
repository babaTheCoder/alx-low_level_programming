#include "main.h"

/**
 * get_endianness - a function that checks the order in which bits are
 * stored in a computer system
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
