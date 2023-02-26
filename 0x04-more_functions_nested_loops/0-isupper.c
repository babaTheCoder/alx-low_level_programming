#include "main.h"

/*
 * _isupper check whether an alpabet is capital
 *
 * @c: letter to check
 *
 * return: 0 0r 1
 */

int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
