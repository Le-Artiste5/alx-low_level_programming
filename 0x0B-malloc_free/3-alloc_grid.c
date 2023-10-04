#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dim array
 *
 * @height: vertical of array
 * @width: row of array
 *
 * Return: points to array of the integer
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **gridia;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	gridia = malloc(height * sizeof(int *));
	if (gridia == NULL)
	{
		free(gridia);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		gridia[a] = malloc(width * sizeof(int));
		if (gridia[a] == NULL)
		{
			for (a--; a >= 0; a--)
			free(gridia);
			free(gridia[a]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)

			gridia[a][b] = 0;
	return (gridia);
}
