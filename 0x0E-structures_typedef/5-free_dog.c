#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated by new_dog fn
 * @d: pointer to var created by new_dog fn
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
