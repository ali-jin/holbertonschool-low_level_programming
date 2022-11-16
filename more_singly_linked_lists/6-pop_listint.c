#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: listint_t list
 *
 * Return: head node’s data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *DelNode;
	int tmp;

	if (head == NULL)
		return (0);

	DelNode = *head;
	tmp = (*head)->n;
	*head = (*head)->next;
	free(DelNode);

	return (tmp);
}
