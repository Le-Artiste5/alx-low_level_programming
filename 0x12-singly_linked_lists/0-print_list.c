#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of the linked list list_t
 *
 *
 * @h: points to list_t for printing
 *
 * Return: the number of nodes existent in h
 */


size_t print_list(const list_t *h)
{
	size_t d  = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		d++;
		h = h->next;

	}

	return (d);
}
