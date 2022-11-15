#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: Pointer
 *
 */
void free_list(list_t *head)
{
	list_t *currentNode;

	while (head != NULL)
	{
		currentNode = head->next;
		free(head->str);
		free(head);
		head = currentNode;
	}
}
