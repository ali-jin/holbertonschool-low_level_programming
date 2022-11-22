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
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: dlistint_t list
 * @index: index of the new node
 *
 * Return: the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int idx = 0, len = dlistint_len(head);

	if (index > len)
		return (NULL);

	while (head != NULL)
	{
		if (idx == index)
			return (node);
		node = node->next;
		idx++;
	}
	return (NULL);
}
