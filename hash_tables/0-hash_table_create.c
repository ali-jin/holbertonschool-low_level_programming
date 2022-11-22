#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
