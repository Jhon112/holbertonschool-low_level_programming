/**
 * hash_djb2 - hash function to return a unqiue index
 * @str: str to evaluate to get the hash
 *
 * Return: hash(unique number)
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
