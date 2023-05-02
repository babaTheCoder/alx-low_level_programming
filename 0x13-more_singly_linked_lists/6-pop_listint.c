#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: pointer to a pointer to the head of the list.
 *
 * Return: the data of the head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *active, *tempNode;
	int data;

	active = *head;

	if (head == NULL || active)
		return (0);

	tempNode = active->next;

	data = active->n;
	free(active);
	*head = tempNode;

	return (data);
}
