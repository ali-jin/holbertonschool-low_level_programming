#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: Pointer
 *
 */
void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head->next;
		free(head);
		head = currentNode;
	}
}
