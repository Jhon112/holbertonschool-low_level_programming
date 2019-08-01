#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_length - returns length of str
 * @str: str to be evaluated
 *
 * Return: length of str
 */
int get_length(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != 0)
		len++;
	return (len);
}
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer that points to a list_t var
 * @str: pointer to the str passed
 *
 * Return: Address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *cpy_str;

	cpy_str = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = cpy_str;
	new->len = get_length(cpy_str);
	new->next = *head;
	*head = new;
	return (new);
}
