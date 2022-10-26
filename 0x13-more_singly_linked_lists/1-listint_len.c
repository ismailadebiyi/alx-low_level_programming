#include "lists.h"
#include <stdio.h>

/**
 * listint_len - displat lenght of node
 * @h: list pointer
 * Return: no of node
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
