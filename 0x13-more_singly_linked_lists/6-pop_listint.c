#include "lists.h"

/**
 * pop_listint - deletes head note
 * @head: the head
 * Return: headnodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
		return (0);
	if (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	return (temp->n);
}
