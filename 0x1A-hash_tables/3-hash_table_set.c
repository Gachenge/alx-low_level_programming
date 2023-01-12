#include "hash_tables.h"

/**
 * hash_table_set - add an element to hash table
 * @ht: the table
 * @key: the key to add. must not be null
 * @value: the value corresponding to the key
 * Return: if success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	char *nvalue = strdup(value);
	char *nkey = strdup(key);
	int index = ht(nkey);

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
		return (0);

	if (!nvalue)
		return (0);

	if (!nkey)
		return (0);

	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (0);

	item->value = nvalue;
	item->key = nkey;

	while(ht[index] != NULL && ht[index]->key != -1)
	{
		index++;
		index %= size;
	}
	ht[index] = item;
	return (1);
}
