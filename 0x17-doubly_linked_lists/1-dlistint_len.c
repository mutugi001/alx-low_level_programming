#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * dlistint_len - number of elements
 * @h: list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
