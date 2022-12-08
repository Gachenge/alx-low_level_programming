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
	unsigned int i;

	current = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
		if (!current)
			return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next = new;
	new->next->prev = new;
	return (new);
}
