#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets its head to NULL.
 * @head: pointer to a pointer to the head of the list.
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *active, *next_node;

	if (head == NULL)
		return;

	active = *head;

	while (active != NULL)
	{
		next_node = active->next;
		free(active);
		active = next_node;
	}

	*head = NULL;
}
