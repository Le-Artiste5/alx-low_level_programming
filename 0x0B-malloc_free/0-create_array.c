#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chararcters
 * @size: size of the memory to point to
 * @c: character to be printed
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ptrr;


	if (size == 0)
	{
		return (NULL);
	}
	ptrr = malloc(sizeof(*ptrr) * size);
	if (ptrr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		ptrr[a] = c;
	}
	return (ptrr);
}

