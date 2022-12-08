#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at position
 * @h: the head
 * @idx: the index
 * @n: the data
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int pos = 0;

	current = *h;
	if (!current)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (pos < idx - 1)
	{
		current = current->next;
		pos++;
	}
	if (pos == idx - 1)
	{
		new->prev = current;
		new->next = current->next;
		current->next = new;
		new->next->prev = new;
	}
	return (NULL);
}
