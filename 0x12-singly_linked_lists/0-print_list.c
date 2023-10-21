#include "lists.h"
/**
 * print_list - prints elements in a list
 * @h: head pointer
 *
 *
 * Return: no of elements
 */

size_t print_list(const list_t *h)
{
	size_t a;

	if (h == NULL)
		printf("[%d] %s\n", 0, "(nil)");

	a = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		a++;
		h = h->next;
	}
	return (a);
}
