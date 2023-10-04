#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: initial string
 *
 * Return: On success, returns pointer to string or NULL
 */

char *_strdup(char *str)
{
	unsigned int a, b;
	char *strneww;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	strneww = malloc(sizeof(char) * (a + 1));

	if (strneww == NULL)
	{
		return (NULL);
	}

	for (b = 0; b <= a; b++)
	{
		strneww[b] = str[b];
	}

	return (strneww);
}

