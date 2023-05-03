#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - reverses a list
 *
 * @head: root pointer of list
 *
 * Return: a pointer to first node of new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (*head == 0)
		return (NULL);

	if ((*head)->next == 0)
		return (*head);

	tmp1 = *head;
	tmp2 = tmp1->next;
	tmp1->next = 0;

	while (1)
	{
		if (tmp2->next == 0)
		{
			tmp2->next = *head;
			*head = tmp2;

			break;
		}

		tmp1 = tmp2;
		tmp2 = tmp1->next;
		tmp1->next = *head;

		*head = tmp1;
	}

	return (*head);
}
