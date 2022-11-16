#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: Pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmpnode;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		tmpnode = *head;
		*head = (*head)->next;
		free(tmpnode);
	}
	*head = NULL;
}
