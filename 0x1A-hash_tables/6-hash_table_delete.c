#include "hash_tables.h"

/**
 * hash_table_delete -delete a hash table
 * @ht: the table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;
	hash_table_t *head = ht;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
