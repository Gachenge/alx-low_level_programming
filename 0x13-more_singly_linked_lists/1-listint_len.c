#include "lists.h"

/**
 * listint_len - how many elements
 * @h: the head
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
