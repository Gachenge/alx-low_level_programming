#include "lists.h"

/**
 * add_nodeint - add another node
 * @head: double pointer
 * @n: the integer
 * Return: address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
