#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: Pointer
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int nb_nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[%u] %s\n", h->len, "(nil)");
		h = h->next;
		nb_nodes++;
	}
	return (nb_nodes);
}
