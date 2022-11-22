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
 * delete_node - deletes node
 * @h: dlistint_t list
 * @del: node
 *
 */
void delete_node(dlistint_t **h, dlistint_t *del)
{
	if (*h == NULL || del == NULL)
		return;

	if (*h == del)
		*h = del->next;

	if (del->next != NULL)
		del->next->prev = del->prev;

	if (del->prev != NULL)
		del->prev->next = del->next;

	free(del);
}

/**
 * delete_dnodeint_at_index - deletes the node at index position
 * @head: dlistint_t list
 * @index: index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currtNode = *head;
	unsigned int i, len = dlistint_len(*head);

	if (*head == NULL || index > len)
		return (-1);

	for (i = 0; currtNode != NULL && i < index; i++)
	{
		currtNode = currtNode->next;
	}

	if (currtNode == NULL)
		return (-1);

	delete_node(head, currtNode);

	return (1);
}
