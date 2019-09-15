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
	unsigned int i;
	dlistint_t *new = NULL, *current = NULL, *temp = NULL;

	i = 0;
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
		if (current == NULL)
			break;
		if (current->next == NULL)
			temp = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		new->prev = temp;
		temp->next = new;
		return (new);
	}
	new->prev = current->prev;
	current->prev->next = new;
	current->prev = new;
	new->next = current;
	return (new);
}
