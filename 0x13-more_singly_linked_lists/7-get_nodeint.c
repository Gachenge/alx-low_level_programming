#include "lists.h"

/**
 * listlen - how many
 * @node: the node
 * Return: 0
 */
unsigned int listlen(listint_t *node)
{
	int count;

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
 * get_nodeint_at_index - what is the value of
 * @head: first
 * @index: position
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new, *temp;

	if (!h`ead)
		return (NULL);
	if (index > listlen(head))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	temp = head;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
