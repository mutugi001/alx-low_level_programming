#include "lists.h"
#include <stdio.h>
/**
 * print_listint- prints elements of a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
