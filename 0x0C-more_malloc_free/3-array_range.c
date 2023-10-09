#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @max: maximum value
 * @min: minimum value
 *
 * Return: pointer of int to allocated memory
 */

int *array_range(int min, int max)
{
	int *z;
	int x, y;

	if (min < max)
                return (NULL);
        y = max - min + 1;

        z = malloc(sizeof(int) * y);

	if (z == NULL)
		return (NULL);
	for (x = 0; x < y; x++)
	{
		z[x] = min;
		++min;
	}

	return (z);
}

