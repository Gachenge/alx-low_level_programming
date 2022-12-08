#include "lists.h"

/**
 * add_dnodeint - add a node
 * @head: the first
 * @n: the data to add
 * Return: the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current, *newnode;

	current = *head;
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->prev = NULL;
	newnode->n = n;
	if (!current)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		newnode->next = current;
		current->prev = newnode;
		*head = newnode;
	}
	return (*head);
}
