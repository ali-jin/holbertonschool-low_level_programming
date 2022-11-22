#include "lists.h"

/**
 * add_dnodeint - returns the number of elements in a linked list
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
	*head = newNode;

	return (newNode);
}
