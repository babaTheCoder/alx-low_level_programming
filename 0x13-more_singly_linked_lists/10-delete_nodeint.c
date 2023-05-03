#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * listint - returns num of elems in a list
 *
 * @h: head pointer of list
 *
 * Return: nmber of elms
 */

size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;

	while (h != 0)
	{
		h = h->next;
		size++;
	}
	return (size);
}

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 *
 * @head: A pointer to a pointer to the first node of the list.
 * @index: The index of the node that should be deleted.
 *         Index starts at 0.
 *
 * Return: If the function fails or index is invalid - (-1).
 *         Otherwise - (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *active, *nodeToDel, *tmp;

	unsigned int len = listint_len(*head);
	unsigned int count = 0;

	if (*head == 0)
		return (-1);

	if (len == 1 && index == 0)
	{
		free(*head);
		*head = 0;
		return (1);
	}

	if (index > len - 1)
		return (-1);

	active = *head;

	while (count < index && index != 0)
	{
		nodeToDel = active;
		active = active->next;
		tmp = active->next;
		count++;
	}

	if (index == 0)
	{
		*head = active->next;
		free(active);
	}
	else
	{
		nodeToDel->next = tmp;
		free(active);
	}
	return (1);
}
