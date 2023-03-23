#include <stdio.h>
#include "function_pointers.h"


/**
 * print_name - prints a string that has been input
 *
 * @name: string that is inputed in function
 * @f: function pointer
 *
 * Returns: 0 always
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
