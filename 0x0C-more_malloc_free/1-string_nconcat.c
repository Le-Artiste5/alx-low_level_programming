#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @n: integer
 * @s2: string 2
 * Return: if fails, return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *q;

	if (s2 == NULL)

	b = 0;

	else
	for (b = 0; s2[b] != '\0'; b++)

	if (s1 == NULL)

	a = 0;

	else
	for (a = 0; s1[a] != '\0'; a++)
	if (b > n)
		b = n;

	q = malloc(sizeof(char) * (a + b + 1));

	if (q == NULL)
	return (NULL);

	for (c = 0; c < a; c++)
	q[c] = s1[c];
	for (c = 0; c < b; c++)
	q[c + a] = s2[c];

	q[a + b] = '\0';
	return (q);
}

