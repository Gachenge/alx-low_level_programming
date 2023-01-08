#include "hash_tables.h"

/**
 * key_index - search for key/ value pair index
 * @key: the search topic
 * @size the length of the array
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
