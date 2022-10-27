#include "lists.h"

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
	unsigned int i = 1;

	if (!*head || !head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = (*head)->next;
		(*head)->next = new;
	}
	else
	{
		temp = *head;
		while (i < idx)
		{
			temp = temp->next;
			i++;
		}
		new->n = n;
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
