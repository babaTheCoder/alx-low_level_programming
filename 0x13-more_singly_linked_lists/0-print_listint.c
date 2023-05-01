#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - list all the elements of a list
 *
 * @h: head of linked list
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("Linked list is empty");
	}

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
