#include "lists.h"
/**
 * free_listint - free all memory allocated
 * @head: head pointer
*/
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
	}
}
