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
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: list_t list
 * @str: new node
 *
 * Return: number of elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *lastNode;
	char *copy = strdup(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = copy;
	new_node->len = strlen(copy);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
	lastNode = *head;
		while (lastNode->next != NULL)
	{
			lastNode = lastNode->next;
	}
		lastNode->next = new_node;
	}
	return (*head);
}
