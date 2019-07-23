#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a structure who defines dog object
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Dog object
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

#endif
