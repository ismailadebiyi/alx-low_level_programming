#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at index idx
 * @h: head pointer
 * @idx: index to add node
 * @n: node integer
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cur;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		cur =*h;

		while(i != idx)
		{
			if (cur == NULL && i == idx)
				return (add_dnodeint_end(h, n));
			cur = cur->next;
			i++;
		}
		new->n = n;
		new->prev = cur->prev;
		new->next = cur;
		cur->prev = new;
		cur->prev->next = new;
	}
	return (new)


