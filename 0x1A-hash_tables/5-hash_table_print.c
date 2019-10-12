#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: pointer to hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array = NULL;
	unsigned long int size = 0, i = 0, flag = 0;
	hash_node_t *head = NULL;

	if (ht != NULL)
	{
		size = ht->size;
		array = ht->array;
		printf("{");

		while (i < size)
		{
			if (array[i] == NULL)
			{
				i++;
				continue;
			}
			else
			{
				head = array[i];
				while(head != NULL)
				{
					if (flag)
						printf(", ");
					printf("'%s': '%s'", head->key, head->value);
					flag = 1;
					head = head->next;
				}
				i++;
			}
		}
		printf("}\n");
	}
}
