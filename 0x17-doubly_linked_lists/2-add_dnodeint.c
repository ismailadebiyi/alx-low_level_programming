#include "lists.h"
/**
 * add_dnodeint - add new node in the beginning
 * @head: head node
 * @n: constant int to add
 * Return: node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
