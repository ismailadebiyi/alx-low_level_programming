#include "lists.h"

/**
 * dlistint_len - print doubly linked list count
 * @h: list pointer
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h == NULL)
		{
			return (0);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
