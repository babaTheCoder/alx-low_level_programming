#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at end of list_t
 *
 * @head: first node of list_t
 * @str: string property of new node
 *
 * Return: address of new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));


	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current_node = *head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;

	}

	return (new_node);
}
