#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer 2 pointer that points to first element of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{

	if (head != NULL)
	{
		while (*head != NULL)
		{
			free(*head);
			*head = (*head)->next;
		}
	}
}
