#include "dog.h"
#include <stdlib.h>
/**
 * get_length - return length of a string
 * @str: string to get length of
 *
 * Return: length of str
 */
int get_length(char *str)
{
	int length;

	for (length = 0; str[length] != 0; length++)
	{
	}

	return (length);
}

/**
 * new_dog - creats a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new struct dog variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *cpname, *cpowner;
	int lename = get_length(name), leowner = get_length(owner), i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	cpname = malloc(sizeof(*cpname) * lename + 1);
	if (cpname == NULL)
	{
		free(cpname);
		free(dog);
		return (NULL);
	}
	cpowner = malloc(sizeof(*cpowner) * leowner + 1);
	if (cpowner == NULL)
	{
		free(cpowner);
		free(cpname);
		free(dog);
		return (NULL);
	}
	i = 0;
	while (i <= lename)
	{
		cpname[i] = name[i];
		i++;
	}
	i = 0;
	while (i <= leowner)
	{
		cpowner[i] = owner[i];
		i++;
	}
	dog->name = cpname;
	dog->age = age;
	dog->owner = cpowner;
	return (dog);
}
