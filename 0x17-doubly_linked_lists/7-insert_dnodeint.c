#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at a given position
 * @h: addess of head of list
 * @idx: position to add node
 * @n: data
 *
 * Return: node at the index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = NULL, *current = NULL;

	current = *h;
	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = current;
		*h = new;
		current->prev = new;
		return (new);
	}
	while (i < idx)
	{
		if (i + 1 == idx && current->next == NULL)
		{
			new->prev = current;
			current->next = new;
			return (new);
		}
		current = current->next;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		i++;
	}
	new->prev = current->prev;
	current->prev->next = new;
	current->prev = new;
	new->next = current;
	return (new);
}
