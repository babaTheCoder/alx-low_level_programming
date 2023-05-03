#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 *
 * @head: A pointer to the first node of the list.
 *
 * Return: The address of the node where or NULL if there is no loop.
 **/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pool, *prev;

	if (!head)
		return (NULL);

	pool = prev = head;

	while (pool && prev && pool->next)
	{
		prev = prev->next;
		pool = (pool->next)->next;

		if (prev == pool)
		{
			pool = head;

			while (pool && prev)
				if (prev == pool)
					return (prev);
			prev = prev->next;

			pool = pool->next;
		}
	}
	return (NULL);
}
