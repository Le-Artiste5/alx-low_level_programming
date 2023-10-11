#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @cmp: compares a number
 * @size: size of array
 * @array: an array holding int
 *
 * Return: int match, -1 if size is less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL)
		if (cmp == NULL)
			return (-1);
	for (b = 0; b < size; b++)
	{
		if (cmp(array[b] != 0))
			return (b);
	}

	return (-1);
}

