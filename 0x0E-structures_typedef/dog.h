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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *d);

#endif
