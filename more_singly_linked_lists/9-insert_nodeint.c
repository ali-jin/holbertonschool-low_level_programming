#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: listint_t list
 * @idx: index of node
 * @n: data of node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, len = print_listint(*head);
	listint_t *new, *tmp;

	if (head == NULL || idx > len)
		return (NULL);

	new = malloc(sizeof(listint_t));
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	for (i = 1; i <= idx; i++)
	{
		if (i == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}
	return (tmp);
}
