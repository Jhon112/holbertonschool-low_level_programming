#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array = NULL;
	unsigned long int size = 0, i = 0;
	hash_node_t *head = NULL, *temp = NULL;

	if (ht != NULL)
	{
		size = ht->size;
		array = ht->array;
		while (i < size)
		{
			head = array[i];
			while (head != NULL)
			{
				temp = head;
				head = head->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
