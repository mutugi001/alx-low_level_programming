#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint - add a node at beginning of list
 * @head: beginning of list
 * @n: integrer to add
 * Return:address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
