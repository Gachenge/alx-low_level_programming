#include "lists.h"
/**
 * list_len - how many elements
 * @h: head
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	while(current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
