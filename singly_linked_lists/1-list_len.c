#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: Pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int nb_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		nb_elem++;
	}
	return (nb_elem);
}
