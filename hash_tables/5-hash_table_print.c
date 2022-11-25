#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table
 *
 * Description: A function that prints a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, len = ht->size;
	hash_node_t *item;
	char *comma = "";

	if (ht == NULL)
		return;
	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < len; i++)
		{
			if (ht->array[i] != NULL)
			{
				item = ht->array[i];
				while (item != NULL)
				{
					printf("%s'%s': '%s'", comma, item->key, item->value);
					comma = ", ";
					item = item->next;
				}
			}
		}
		printf("}\n");
	}
}
