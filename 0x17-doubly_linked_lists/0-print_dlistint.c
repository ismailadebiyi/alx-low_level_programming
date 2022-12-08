#include "lists.h"

/**
 * print_dlistint - print list of of
 * element in the doubly linked list and count
 * @h: list pointer
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h == NULL)
		{
			printf("nil\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
