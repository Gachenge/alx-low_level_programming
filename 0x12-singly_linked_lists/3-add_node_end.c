#include "lists.h"

/**
 * _strlen - string length
 * @str: the string
 * Return: 0
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}


/**
 * add_node_end - add another element at the end
 * @head double pointer
 * @str: the string
 * Return: 0
 */

list_t *add_node_end(list_t ** head, const char *str)
{
	unsigned int i;
	list_t *new;

	if (!str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = 
