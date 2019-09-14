#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly list
 * @head: addess of head of list
 * @n: data of node
 *
 * Return: address of new node or NULL if fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		new->prev = current;
		current->next = new;
	}
	return (new);
}
