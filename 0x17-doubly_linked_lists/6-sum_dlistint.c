#include "lists.h"

/**
 * sum_dlistint - sum integers in linked list
 * @head: the beginning
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
