#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: Pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *nxtnode, *tmpnode;

	tmpnode = *head;

	while (tmpnode)
	{
		nxtnode = tmpnode->next;
		free(tmpnode);
		tmpnode = nxtnode;
	}

	*head = NULL;
}
