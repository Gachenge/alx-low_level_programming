#include "lists.h"

/**
 * print_list - print elements in linked list
 * @h: head
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	unsigned int i = 0;

	current = h;
	while (current)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		i++;
	}
	return (i);
}
