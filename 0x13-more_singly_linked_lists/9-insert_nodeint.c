#include "lists.h"

/**
 * listlen - how mny
 * @node: begin
 * Return: length
 */

unsigned int listlen(listint_t *node)
{
	int count = 0;

	if (!node)
		count = 0;
	while (node)
	{
		node = node->next;
		count++;
	}
	return (count);
}

/**
 * insert_nodeint_at_index - insert anothwer node
 * @head: begin
 * @idx: position
 * @n: the data
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;

	if (!*head)
		return (NULL);
	if (idx > listlen(*head))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	temp = *head;
	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
