#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key of hash_node_t
 * @value: value of hash_node_t
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *head = NULL;
	hash_node_t *new = NULL;
	char *value_cpy = strdup(value), *key_cpy = strdup(key);

	if (ht == NULL || key == NULL)
		return (0);

	if (strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = key_cpy;
	new->value = value_cpy;
	new->next = NULL;

	head = ht->array[index];
	if (head)
	{
		new->next = head;
		while (head != NULL)
		{
			if (strcmp(head->key, key_cpy) == 0)
				head->value = value_cpy;
			head = head->next;
		}
	}
	head = new;

	ht->array[index] = head;
	return (1);

}
