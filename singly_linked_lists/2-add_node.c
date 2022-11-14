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
 * Return: number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	char *copy = strdup(str);
	int lenght = _strlen(copy);

	first = malloc(sizeof(list_t));
	first->str = copy;
	first->len = lenght;
	first->next = (*head);
	(*head) = first;
	return (first);
}
