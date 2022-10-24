#include "lists.h"

/**
 * print_list - print elements in linked list
 * @h: head
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	while (current)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		i++;
	}
	return (i);
}
