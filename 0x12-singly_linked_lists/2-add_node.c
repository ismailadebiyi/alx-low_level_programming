#include "lists.h"
#include <string.h>
/**
 * add_node - add new element node to a list
 * @head: pointer to the head of the list
 * @str: the string to be added to the list
 * Return: NULL if the function failelse return the pointer
 * to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *tmp;
	int size = 0;
	list_t *new;

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
	new->next = *head;
	*head = new;
	return (new);
}
