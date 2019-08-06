#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: header of list
 *
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
