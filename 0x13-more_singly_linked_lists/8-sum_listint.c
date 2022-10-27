#include "lists.h"

/**
 * get_nodeint_at_index - get the node at index n
 * @head: head node pointer
 * @index: index node
 * Return: node at index x or NULL if the index does not exist
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t nodes = 0;

	while (nodes != index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		nodes++;
	}
	return (head);
}
