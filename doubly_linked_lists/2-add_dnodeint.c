#include "lists.h"

/**
 * add_dnodeint - add new node at the front
 * @head: dlistint_t list
 * @n: value of new node
 *
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	int copy = n;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = copy;
	newNode->next = *head;
	newNode->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
