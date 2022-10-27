#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: head node
 * Return: 0 if the list is empty.
*/

int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int v;

	if (*head == NULL)
	{
		return (0);
	}
	next_node = (*head)->next;
	v = (*head)->n;
	free(*head);
	*head = next_node;
	return (v);
}
