#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: number of elements in array
 * @size: size of element type
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;
	int bytes;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bytes = nmemb + size;
	p = malloc(bytes);
	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);

}
