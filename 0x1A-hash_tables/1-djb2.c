#include "hash_tables.h"

/**
 * hash_djb2 - the hashing function for the hash table
 *
 * @str: the key to hash
 *
 * Return: the index to the value in hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
