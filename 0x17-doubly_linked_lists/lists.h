#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * strutct dlistint_s - double linked list
 * @n: integer(data)
 * @prev: pointer to previous node
 * @next: pointer to next node
 *
 * Description: doubly linked list node structure for holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
