#include "hash_tables.h"
/**
 * hash_table_delete - delete the hash table
 * @ht: table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
				free(node->key);
				free(node->value);
				free(node);
				node = node->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
