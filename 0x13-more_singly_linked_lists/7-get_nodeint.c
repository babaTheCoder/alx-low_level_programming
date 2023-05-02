#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node to be returned, starting at 0.
 *
 * Return: pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *active;

	if (head == NULL)
		return (NULL);

	active = head;

	for (count = 0; count < index; count++)
	{
		if (active == NULL)
			return (NULL);
		active = active->next;
	}

	return (active);
}
