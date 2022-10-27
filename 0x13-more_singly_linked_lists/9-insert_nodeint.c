#include "lists.h"

/**
 * insert_nodeint_at_index - insert at some index node
 * @head: head node pointer
 * @idx: index to be inserted into
 * @n: integer to be inserted
 * Return: address to the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	size_t i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	current = *head;
	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}
	while (i != (idx - 1))
	{
		if (current == NULL || current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
		i++;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
