#include "hash_tables.h"
/**
 * hash_table_print - prints the entire contents of
 * the hash table.
 * @ht: being the hash table
 * Return: Null
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, last_pos = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	if (ht)
	{
		for (; i < ht->size - 1; i++)
		{
			if (ht->array[i] != NULL)
				last_pos = i;
		}

		for (i = 0; i <= last_pos; i++)
		{
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (i < last_pos - 1)
					printf(", ");
			}

		}
	}
	printf("}\n");
}
