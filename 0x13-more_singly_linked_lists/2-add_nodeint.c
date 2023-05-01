#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - func to add a new elem at beginning of list
 *
 * @head: root or head of list
 * @n: data of new elem
 *
 * Return: new elem or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newElem = malloc(sizeof(listint_t));

	if (newElem == NULL)
	{
		return (NULL);
	}

	newElem->n = n;

	newElem->next = *head;

	*head = newElem;

	return (newElem);
}
