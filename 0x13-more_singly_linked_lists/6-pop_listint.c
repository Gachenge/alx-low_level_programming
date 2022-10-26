#include "lists.h"

/**
 * pop_listint - deletes head note
 * @head: the head
 * Return: headnodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head)
		return (0);
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return ((*head)->n);
}
