#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add element to
 * @key: string for key gto hold
 * @value: value associated with the key
 * Return: 1 if success or -1 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node = malloc(sizeof(hash_node_t));
	hash_node_t *tmp;

	if (!key || !ht || !node || strcmp("", key) == 0)
	{
		free(node);
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[idx] == NULL)
		ht->array[idx] = node;
	else
	{
		while (tmp != NULL)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(node->key);
				free(tmp->value);
				tmp->value = node->value;
				free(node);
				return (1);
			}
			tmp = tmp->next;
		}
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}
	return (1);
}
