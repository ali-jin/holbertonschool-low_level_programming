#include "lists.h"
#include <stdio.h>

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
