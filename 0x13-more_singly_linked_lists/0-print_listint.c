#include "lists.h"

/**
 * print_listint - this will print all the elements of a linked list
 * @h: this is the linked list of type listint_t to print
 * Return: count of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
