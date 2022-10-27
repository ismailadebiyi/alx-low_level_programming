#include "lists.h"

/**
 * sum_listint - sum up all integer in the linked list
 * @head: head node
 * Return: sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head == NULL)
		{
			return (0);
		}
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
