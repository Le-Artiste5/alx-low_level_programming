#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments in the program
 *
 * @ac: an argument counter
 * @av: an argument vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *bac;
	int a, b, e = 0, f = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)

			f++;
	}
	f += ac;
	if (ac == 0 || av == NULL)
		return (NULL);

	bac = malloc(f + 1 * sizeof(char));
	if (bac == NULL)

		return (NULL);
	a = 0;
	while (a < ac)
		a++;
	{
		for (b = 0; av[a][b]; b++)
		{
			bac[e] = av[a][b];
			e++;
		}

		if (bac[e] == '\0')
		{
			bac[e++] = '\n';
		}
	}

	return (bac);
}

