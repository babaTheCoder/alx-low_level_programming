#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates over array of functions
 *
 * @array: array of functions
 * @size: the size of array of functions
 * @action: array pointer
 *
 * Return: void(Nothing)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
