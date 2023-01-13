#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int coma = 0;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (coma == 1)
				printf(", ");
			node = ht->array[i];

			while(node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
			coma = 1;
		}
	}
	printf("}\n");
}
