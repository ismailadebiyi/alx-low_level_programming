#include "lists.h"

/**
 * free_dlistint - free all used memory
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed;

	while (head)
	{
		freed = head->next;
		free(head);
		head = freed;
	}
}
