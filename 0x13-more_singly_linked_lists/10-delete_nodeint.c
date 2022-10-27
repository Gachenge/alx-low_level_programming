#include "lists.h"

/**
 * delete_nodeint_at_index - delete a certain node
 * @head: begin
 * @index: position
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nxt;
	unsigned int i = 1;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
		return (1);
	}
	temp = *head;

	while(i < index)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	nxt = temp->next;
	temp->next = nxt->next;
	free(nxt);
	return (1);
}
