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

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx > len || h == NULL)
		return (NULL);

	for (i = 0; i < (idx - 1); i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	newNode->prev = tmp;
	newNode->next = tmp->next;
	tmp->next->prev = newNode;
	tmp->next = newNode;

	return (newNode);
}
