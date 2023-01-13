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
	int index, i;

	if (key == NULL || *key == '\0' || ht == NULL || value == NULL)
		return (0);

	if (!nvalue)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = nvalue;
				return (1);
		}
	}

	item = malloc(sizeof(hash_node_t));
	if (!item)
	{
		free(nvalue);
		return (0);
	}

	item->key = nkey;
	if (!item->key)
	{
		free(item);
		return (0);
	}
	item->value = nvalue;
	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}
