#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory in the heap
 * @ptr: previous pointer to old mem
 * @new_size: new soze
 *
 * @old_size: old size allocated to malloc
 * Return: ptr to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_pointer = ptr;
	char *o;
	size_t a, max = new_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		o = malloc(new_size);
			return (o);
	}

	else if (old_size == new_size)
		return (ptr);

	o = malloc(new_size);
		if (o == NULL)
			return (NULL);
	if (old_size < new_size)
		max = old_size;
	for (a = 0; a < max; a++)
		o[a] = old_pointer[a];

	free(ptr);

	return (o);
}

