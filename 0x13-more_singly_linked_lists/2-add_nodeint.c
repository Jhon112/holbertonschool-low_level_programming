#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer that points to a list_t var
 * @n: integer to add
 *
 * Return: Address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
