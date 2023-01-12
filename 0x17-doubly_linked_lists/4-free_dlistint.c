#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dlistint - frees a list
 * @head: pointer to list
 * Returns: Always 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
