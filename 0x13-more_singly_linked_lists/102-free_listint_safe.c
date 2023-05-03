#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 *
 * @h: A pointer to a pointer to the first node of the list.
 *
 * Return: The size of the list that was freed.
 **/


size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *temp2;
	unsigned int i = 0;

	if (h == 0 || temp == 0)
	{
		return (0);
	}

	temp = *h;

	while (temp != 0)
	{
		temp2 = temp;
		temp = temp->next;
		i++;

		if (temp2 <= temp)
			break;
	}

	*h = 0;

	return (i);
}
