#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer 2 pointer to listint_t struct
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	free(temp);
	*head = (*head)->next;
	return (n);
}
