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
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t *) * size);
	/**
	 * NOTE TO SELF:
	 * why malloc for ``sizeof(hash_node_t *)``?
	 * ANS: ``array`` is an array of pointers, the initial
	 * ``sizeof(hash_node_t)`` allocates space for the
	 * typedef of hash_node_t (8 * 3 = 24 bytes) whereas
	 * ``sizeof(hash_node_t *)`` allocates space for
	 * pointer to hash_node_t (8 bytes).
	 */
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;

	for (i = 0; i < ht->size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
