#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: dlistint_t list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode = head;

	while (head != NULL)
	{
		currentNode = head->next;
		free(head);
		head = currentNode;
	}
}
