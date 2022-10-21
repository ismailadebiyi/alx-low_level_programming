#include "lists.h"
#include <string.h>
/**
 * add_node_end - add new element node to the end of a list
 * @head: pointer to the head of the list
 * @str: the string to be added to the list
 * Return: NULL if the function failelse return the pointer
 * to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *tmp;
	int size = 0;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	tmp = strdup(str);
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[size])
	{
		size++;
	}
	new->str = tmp;
	new->size = size;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
