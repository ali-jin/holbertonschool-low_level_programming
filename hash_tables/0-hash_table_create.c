#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(*table));

	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(table->size * sizeof(*(table->array)));

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
