#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: A pointer to a pointer to the first node of the list.
 * @idx: The index of the list where the new node should be added.
 *       Index starts at 0.
 * @n: The value to store in the new node.
 *
 * Return: If the function fails or index is invalid - NULL.
 *         Otherwise - Address of the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *active = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	idx--;

	while (idx != 1)
	{
		active = active->next;
		idx--;
	}

	new_node->next = active->next;

	active->next = new_node;

	return (new_node);
}
