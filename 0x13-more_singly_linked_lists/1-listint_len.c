#include "lists.h"

/**
 * listint_len - returns the number of elementsin listint_t
 * @h: head of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
