#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory for dog
 * @dog: pointer to variable of tthe type
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
