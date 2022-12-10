#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at index idx
 * @h: head pointer
 * @idx: index to add node
 * @n: node integer
 * Return: new pointer
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cur;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	cur = *h;

	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		while (i != idx && cur != NULL)
		{
			cur = cur->next;
			i++;
		}
		new->n = n;
		new->prev = cur->prev;
		new->next = cur;
		cur->prev->next = new;
		cur->prev = new;
	}
	return (new);
}


