#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - a func that returns the number of elems in a list
 *
 * @h: head of linked list
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("Linked list is empty");
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
