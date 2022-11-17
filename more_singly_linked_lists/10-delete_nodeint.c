#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index position
 * @head: listint_t list
 * @index: index of the node
 *
 * Return: 1 (Success) or -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del = *head, *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = del->next;
		free(del);
		return (1);
	}

	for (i = 1; del != NULL && i < index; i++)
	{
		del = del->next;
	}
	if (del == NULL || del->next == NULL)
		return (-1);

	tmp = del->next->next;
	free(del->next);
	del->next = tmp;
	return (1);
}
