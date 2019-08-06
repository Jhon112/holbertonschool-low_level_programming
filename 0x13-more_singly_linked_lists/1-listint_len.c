#include <stdio.h>
#include "lists.h"
/**
 * listint_len - return number of elements of a listint_t list
 * @h: header of list
 *
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
