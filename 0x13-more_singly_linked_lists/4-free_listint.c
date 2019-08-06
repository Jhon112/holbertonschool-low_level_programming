#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to first element of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{

	if (head != NULL)
	{
		while (head != NULL)
		{
			free(head);
			head = head->next;
		}
	}
}
