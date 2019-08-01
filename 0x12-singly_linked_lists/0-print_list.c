#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t
 * @h: head of list - entry point
 *
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}
