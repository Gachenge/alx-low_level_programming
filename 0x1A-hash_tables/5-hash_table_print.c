#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
		printf("%s, "%s", ht->key, ht->value);
}
