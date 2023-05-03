#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: A pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 **/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp1, *temp2;

	unsigned int count = 0;

	temp1 = head;

	if (temp1 == 0)
		return (0);

	while (temp1 != 0)
	{
		temp2 = temp1;

		temp1 = temp1->next;

		count++;

		printf("[%p] %d\n", (void *)temp2, temp2->n);

		if (temp2 <= temp1)
		{
			printf("-> [%p] %d\n", (void *)temp1, temp1->n);
			break;
		}
	}
	return (count);
}
