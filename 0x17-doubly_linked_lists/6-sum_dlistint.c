#include "lists.h"

/**
 * sum_dlistint - sum all integer in the list
 * @head: head pointer
 * Return: sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head == NULL)
			return (0);
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
