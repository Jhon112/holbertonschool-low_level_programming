#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node of a specific index
 * @head: addess of head of list
 * @index: node wanted
 *
 * Return: node at the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}
	return (head);
}
