#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @size: size of the array
 * @action: a pointer to function
 * @array: array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL)
		if (action == NULL)
			return;
	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}

}
