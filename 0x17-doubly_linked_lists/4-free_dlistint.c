#include "lists.h"
/**
 * free_dlistint - frees memory allocated for a each node
 * @head: pointer to first node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	next = head;
	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
