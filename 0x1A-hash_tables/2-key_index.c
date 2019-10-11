#include "hash_tables.h"

/**
 * key_index - function to return the index of a key
 * @key: key to get the index of
 * @size: size of array. Needed to perform calculation of index
 *
 * Return: result of hash % size (index)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0, index = 0;

	hash = hash_djb2(key);
	index = hash % size;

	return (index)
}
