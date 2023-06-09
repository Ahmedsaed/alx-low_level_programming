#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 *
 * @key: the key to hash
 * @size: the size of the hash table
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);

	return (index % size);
}
