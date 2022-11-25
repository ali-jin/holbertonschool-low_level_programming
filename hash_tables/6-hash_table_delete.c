#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table
 *
 * Description: A function that deletes a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *item;

	while (i <= ht->size)
	{
		while (item != NULL)
		{
			item = ht->array[i]->next;
			free(item->key);
			free(item->value);
			free(item);
			ht->array[i] = item;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
