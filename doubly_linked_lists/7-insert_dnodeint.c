#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: Pointer list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nbNodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nbNodes++;
	}
	return (nbNodes);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dlistint_t list
 * @idx: index of the new node
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, len = dlistint_len(*h);
	dlistint_t *newNode, *tmp = *h;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx > len || h == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode->next = tmp;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	newNode->next = tmp->next;
	newNode->prev = tmp;
	tmp->next = newNode;
	tmp->next->prev = newNode;

	return (newNode);
}
