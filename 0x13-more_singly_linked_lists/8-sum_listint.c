#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - calculates the sum of all the data in a list
 * @head: a pointer to the head of the list
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
