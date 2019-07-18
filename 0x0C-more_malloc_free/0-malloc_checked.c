#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: amount of bytes to allocate
 *
 * Return: void
 * status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	else
		return (m);
}
