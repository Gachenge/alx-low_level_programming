#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end
 * @head: the head
 * @n: the data
 * Return: The new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!current)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	return (new);
}
