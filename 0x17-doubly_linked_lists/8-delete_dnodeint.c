#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at
 * @head: the first
 * @index: the position
 * Return: success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 1;

	if (!*head)
		return (-1);
	while (i < index)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
		i++;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
