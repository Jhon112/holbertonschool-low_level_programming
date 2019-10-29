#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in asc order using
 * insertion sort algorithm and prints the list each time a swap is done
 *
 * @list: pointer to pointer with the address of first node
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL, *current = NULL, *previous = NULL;

	if (list != NULL)
	{
		temp = *list;
		while (temp != NULL)
		{
			current = temp;
			previous = current->prev;
			while (current->prev != NULL && previous->n > current->n)
			{
				/*swap nodes*/

				previous->next = current->next;
				current->prev = previous->prev;
				current->next = previous;
				previous->prev = current;
				if (previous->next)
					previous->next->prev = previous;
				if (current->prev)
					current->prev->next = current;
				else
					*list = current;

				print_list(*list);
				previous = current->prev;
			}
			temp = temp->next;
		}
	}
}
