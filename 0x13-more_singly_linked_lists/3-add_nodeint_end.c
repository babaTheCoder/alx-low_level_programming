#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node to end of elem
 *
 * @head: root of head
 * @n: data of new node
 *
 * Return: new node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode = malloc(sizeof(listint_t));
	listint_t *activeNode;


	if (endNode == 0)
	{
		return (0);
	}

	activeNode = *head;

	endNode->n = n;
	endNode->next = 0;

	if (activeNode == 0)
	{
		*head = endNode;
	}
	else
	{
		while (activeNode->next != 0)
		{
			activeNode = activeNode->next;
		}

		activeNode->next = endNode;
	}



	return (endNode);
}
