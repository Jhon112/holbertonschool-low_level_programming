#include "lists.h"

/**
 * create_node - creates a space for a node
 * @n: data of new node
 *
 * Returns: pointer to new node
 */
dlistint_t *create_node(int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

/**
 * insert_node - insert node at the index
 * @new: pointer to new node
 * @current: pointer to the new next node. The one at the index given
 *
 * Return: new node
 */
dlistint_t *insert_node(dlistint_t *new, dlistint_t *current)
{
	new->prev = current->prev;
	current->prev->next = new;
	current->prev = new;
	new->next = current;
	return (new);
}

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
	dlistint_t *new = NULL, *current = *h;

	if (h == NULL)
		return (NULL);
	new = create_node(n);
	if (idx == 0)
	{
		if (*h != NULL)
		{
			new->next = current;
			current->prev = new;
		}
		*h = new;
		return (new);
	}
	if (*h == NULL)
	{
		free(new);
		return (NULL);
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
	new = insert_node(new, current);
	return (new);
}
