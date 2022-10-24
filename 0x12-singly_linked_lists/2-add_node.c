#include "lists.h"
/**
 * _strlen - length of string
 * @str: the string
 * Return: 0
 */

int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node - add node to the beginning
 * @head: double pointed
 * @str: data
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
}
