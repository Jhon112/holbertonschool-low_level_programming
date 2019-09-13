#include "lists.h"
/**
 * print_dlistint - function to print a double list
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *head = NULL;

	if (h == NULL)
		return (0);

	head = h;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		counter++;
	}

	return (counter);
}
