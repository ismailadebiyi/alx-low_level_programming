#include "lists.h"

/**
 * free_dlistint - free all used memory
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
	}
}
