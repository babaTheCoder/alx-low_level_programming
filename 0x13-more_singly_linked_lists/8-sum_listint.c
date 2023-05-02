#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
