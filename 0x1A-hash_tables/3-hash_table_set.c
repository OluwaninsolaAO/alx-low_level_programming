#include "hash_table.h"
/**
 * hash_table_set - inserts data into hash table
 * @ht: being the hash table
 * @key: being the key of the data to be inserted
 * @value: being the value associated to the key
 * Return: 1 on success or 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;

	if (!key)
		return (0);

	index = key_index(key, ht->size);

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	item->key = key;
	item->value = value;
	item->next = NULL;

	if (ht->array[index] == NULL) /*if empty, push data*/
	{
		ht->array[index] = item;
		return (1);
	}
	else if (ht->array[index] != NULL) /*if !empty, create a chain*/
	{
		(ht->array[index])
	}
}
