#include "lists.h"

/**
 * free_list - free malloc
 * @head: head of the list
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
