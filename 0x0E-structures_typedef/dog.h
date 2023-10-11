#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Defining a struct
 * @name: name to be inputted
 * @age: age
 * @owner: Owner
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

void print_dog(struct dog *d);

#endif
