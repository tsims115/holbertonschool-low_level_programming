#include "hash_tables.h"
/**
 * hash_table_get - retrieve a value with given key
 * @ht: hash table to use
 * @key: key to use to find value
 * Return: the value assiciated with the element, or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	node = ht->array[key_index((const unsigned char *)key, ht->size)];

	if (node == NULL)
		return (NULL);

	return (node->value);
}
