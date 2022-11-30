#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees a list
 * @head: head of list_t
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
