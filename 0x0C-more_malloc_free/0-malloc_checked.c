#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates mem using malloc command
 * @b: Integer to be inputed
 * Return: 98 if failed and allocated memory if success
 */

void *malloc_checked(unsigned int b)
{

	void *ptrr;

	ptrr = malloc(b);

	if (ptrr == NULL)
	{
		exit(98);
	}
	return (0);
}

