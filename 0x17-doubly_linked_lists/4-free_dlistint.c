#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: the first
 * Return: the freed location
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (current)
	{
		current = current->next;
		free(current);
	}
	free(head);
}
