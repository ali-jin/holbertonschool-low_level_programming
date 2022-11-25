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
	hash_node_t *item, *tmp;

	item = tmp = NULL;
	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (item != NULL)
			{
				item = tmp;
				tmp = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
