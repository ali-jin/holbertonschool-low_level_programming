#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table
 *
 * Description: A function that deletes a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp, *del;
	temp = del = NULL;
	if (ht == NULL)
		return;
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
			temp = ht->array[index];
		while (temp != NULL)
		{
			del = temp;
			temp = temp->next;
			free(del->key);
			free(del->value);
			free(del);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
