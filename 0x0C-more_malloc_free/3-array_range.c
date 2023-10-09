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

    if (max < min)
      return (NULL);
    y = max - min + 1;

    z = malloc (sizeof(int * y));
    if (x == NULL)
    {
        return (NULL);
    }
    for (x = 0; x < y; x++)
    {
        z[a] = min;
        min++;
    }
    return (x);

 }
