#include "lists.h"

/**
 * reverse_listint - reverse the list
 * @head: begin
 * Return: 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *nxt = NULL;

	while ((*head) != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = nxt;
	}
	*head = prev;
	return (*head);
}
