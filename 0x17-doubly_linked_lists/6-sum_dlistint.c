#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - sum of data in alist
 * @head: pointer to list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
