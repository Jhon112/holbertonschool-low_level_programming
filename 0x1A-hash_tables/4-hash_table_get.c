#include "hash_tables.h"

/**
 * hash_table_get - gets an element of the hash table
 * @ht: pointer to hash table
 * @key: key of hash_node_t to look for
 *
 * Return: value of element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *head = NULL;

	if (ht == NULL || key == NULL || ht->array == NULL)
		return (0);

	if (strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	head = ht->array[index];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head->value);
		}
		head = head->next;
	}
	return (NULL);

}
