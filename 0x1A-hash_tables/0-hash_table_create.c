#include "hash_tables.h"
/**
 * hash_table_create - create a hash table of size ``size``
 * @size: defines the size of the table
 * Return: NULL if failed or created table on success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (!ht)
		return (NULL);

	ht->size = size;

	for (i = 0; i < ht->size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
