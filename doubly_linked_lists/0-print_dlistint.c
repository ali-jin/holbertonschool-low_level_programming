#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: Pointer list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
