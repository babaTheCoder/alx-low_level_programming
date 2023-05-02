#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free all memory allocated to a linked list
 *
 * @head: root pointer of the linked list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	if (head == 0)
		return;

	free_listint(head->next);
	free(head);
}
