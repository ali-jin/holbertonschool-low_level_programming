#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: listint_t list
 * @index: index of the node
 *
 * Return: returns the nth node or 0 if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	int indx = 0;

	while (node != NULL)
	{
		if (indx == index)
			return (node);
		node = node->next;
		indx++;
	}
	return (NULL);
}
