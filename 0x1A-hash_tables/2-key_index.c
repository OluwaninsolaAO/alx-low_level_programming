#include "hash_tables.h"
/**
 * key_index - assign index to a specific key
 * @key: being the key
 * @size: being the size of the hash table
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
