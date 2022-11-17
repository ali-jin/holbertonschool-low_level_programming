#include "lists.h"

/**
 * listint_len - prints all the elements of a list_t list
 * @h: Pointer
 *
 * Return: the number of element(s)
 */
size_t listint_len(const listint_t *h)
{
	int nb_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		nb_elem++;
	}
	return (nb_elem);
}

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
	unsigned int i, len = listint_len(*head);
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx > len || head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (tmp);
}
