#include "lists.h"
/**
 * lent - lenght of a used string
 * @str: a string
 *
 * Return: length
 */
int lent(const char *str)
{
	int a;

	if (str == NULL)
		return (0);
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
