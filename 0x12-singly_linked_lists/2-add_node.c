#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the start of list_t
 *
 * @head: first node of list_t
 * @str: string property of node
 *
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	char *new_str;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{

		return (NULL);
	}

	new_str = strdup(str);

	if (new_str == NULL)
	{

		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = strlen(new_str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
