#include "lists.h"
/**
 * dlistint_len - function to return len of list
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *head = NULL;

	if (h == NULL)
		return (0);

	head = h;
	while (head != NULL)
	{
		head = head->next;
		counter++;
	}
	return (counter);
}
