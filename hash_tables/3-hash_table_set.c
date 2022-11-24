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
	const unsigned char *k = (const unsigned char *)key;
	unsigned long index = key_index(k, ht->size), i;
	hash_node_t *item = malloc(sizeof(hash_node_t));
	char *copyValue = strdup(value);

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (item == NULL)
	{
		free(item);
		free(copyValue);
		return (0);
	}

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copyValue;
			return (1);
		}
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