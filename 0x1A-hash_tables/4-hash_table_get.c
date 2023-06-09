#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: pointer to the hash table
 * @key: pointer to the key to retrieve it's value
 *
 * Return: pointer to the value in the hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];
	if (tmp == NULL || tmp->value == NULL)
		return (NULL);

	return (tmp->value);
}
