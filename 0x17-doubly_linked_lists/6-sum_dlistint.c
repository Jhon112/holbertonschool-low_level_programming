#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data inside all nodes
 * @head: pointer to first node
 *
 * Return: sum of data(n)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
