#include "lists.h"

/**
 * dlistint_len - how long the list
 * @h: the head
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	int len = 0;

	current = h;
	while (current)
	{
		current = current->next;
		len++;
	}
	return (len);
}
