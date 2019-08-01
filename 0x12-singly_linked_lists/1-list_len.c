#include <stdio.h>
#include "lists.h"
/**
 * list_len - return number of elements of a list_t
 * @h: head of list - entry point
 *
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
