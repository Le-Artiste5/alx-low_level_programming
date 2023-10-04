#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings
 * @s1: old string
 * @s2: new string
 *
 * Return: On success, empty string failure should return NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, tempx;
	char *ptrr;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
	for (b = 0; s2[b] != '\0'; b++)

	ptrr = malloc(sizeof(char) * (a + b + 1));

	if (ptrr == NULL)
	{
		free(ptrr);
		return (NULL);
	}

	for (c = 0; c < a; c++)
	{
		ptrr[c] = s1[c];
	}

	for (tempx = 0; tempx <= b; tempx++)
	{
		ptrr[c] = s2[tempx];
		c++;
	}
	return (ptrr);

}
