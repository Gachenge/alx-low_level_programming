#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at position
 * @head: the head pointer
 * @index: the position
 * Return: The node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;
	if (index < 1)
		return (NULL);
	while (i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index)
		return (current);
	if (index > i)
		return (NULL);
	return (NULL);
}
