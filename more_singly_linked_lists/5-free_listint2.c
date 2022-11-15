#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: Pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	while (*head != NULL)
	{
		currentNode = *head;
		free(currentNode->next);
		currentNode->next = *head;
		*head = NULL;
	}
}
