#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to list
 * @index: index of node
 * Return: 1 if succeedded
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
