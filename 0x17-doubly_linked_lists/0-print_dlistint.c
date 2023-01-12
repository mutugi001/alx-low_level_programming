#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints elements in alist
 * @h: the list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h);
{
	size_t elements = o;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
