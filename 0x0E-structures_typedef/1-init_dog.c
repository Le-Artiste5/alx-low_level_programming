#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - New struct from dog to be initialized
 * @age: age of dog
 * @name: name of struct
 * @owner: owner
 * @d: points to the struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
