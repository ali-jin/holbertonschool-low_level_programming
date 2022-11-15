#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Entry point
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: list_t list
 * @str: new node
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *copy;
	int lenght;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	lenght = _strlen(copy);

	new_node->str = copy;
	new_node->len = lenght;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
