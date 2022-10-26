#include "lists.h"
#include <string.h>

/**
 * add_nodeint - add figure to the beginning of the node
 * @head: head node
 * @n: integer to be added
 * Return: address of the new element or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
