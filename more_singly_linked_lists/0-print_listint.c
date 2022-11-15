#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_t list
 * @h: Pointer
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nbNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbNodes++;
	}
	return (nbNodes);
}
