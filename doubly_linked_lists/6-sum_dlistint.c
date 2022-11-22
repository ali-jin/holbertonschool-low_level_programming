#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t
 * @head: dlistint_t list
 *
 * Return: sum of all the data (n) or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0, nb;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		nb = head->n;
		sum += nb;
		head = head->next;
	}
	return (sum);
}
