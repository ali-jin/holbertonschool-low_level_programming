#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));
	unsigned long index;
	const unsigned char *k = (const unsigned char *)key;
	char *copyValue = strdup(value);

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index(k, ht->size);
	if (item == NULL)
	{
		free(item);
		free(copyValue);
		return (0);
	}
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}

	item->value = copyValue;
	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}