#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all integer nodes
 * @h: node pointer
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	
	while (h)
	{
		if (h == NULL)
		{
			printf("nil\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);    
}
