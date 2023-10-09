#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _calloc - gives memory to array
 * @nmemb: block memory capacity
 * @size: size of int
 * 
 * Return: void pointer  
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    size_t a;

    char *x;
 
    if (size == 0 || nmemb == 0)
    return (NULL);
    x = malloc(nmemb * size);

    if (x == NULL)
    return (NULL);

for (a = 0; a < (nmemb * size); a++)
x[a] = 0;
return (x);

}
