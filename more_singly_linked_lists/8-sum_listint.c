#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: listint_t list
 *
 * Return: return the sum or 0 if empty
 */
int sum_listint(listint_t *head)
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
