#include "lists.h"
/**
 * list_len - get the no of element in the list
 * @h: list pointer
 * Return the size of the list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
