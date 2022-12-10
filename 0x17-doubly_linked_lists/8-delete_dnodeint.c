#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index idx
 * @head: head pointer
 * @index: index point
 * Return: 1 if success and -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i = 0;
	dlistint_t *cur;

	if (*head == NULL)
		return (-1);

	cur = *head;
	if (index == 0)
	{
		*head = cur->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}
	while (i != index)
	{
		cur = cur->next;
		i++;
	}
	cur->prev->next = cur->next;
	if (cur->next != NULL)
		cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
