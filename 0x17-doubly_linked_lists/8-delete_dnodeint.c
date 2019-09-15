#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given position
 * @head: addess of head of list
 * @index: position to delete
 *
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (head == NULL)
		return (-1);
	if (index == 0 || *head == NULL)
	{
		if (*head != NULL)
		{
			if (current->next != NULL)
			{
				*head = current->next;
				current->next->prev = NULL;
			}
			else
				*head = NULL;
			free(current);
			return (1);
		}
		return (-1);
	}
	while (i < index)
	{
		current = current->next;
		if (current == NULL)
		{
			return (-1);
		}
		i++;
	}
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
