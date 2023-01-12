#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dlistint - prints elements in alist
 * @h: the list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("[%d]\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
