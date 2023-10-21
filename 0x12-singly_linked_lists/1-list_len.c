#include "lists.h"
/**
 * list_len - prints number of elements in list
 * @h: head pointer to node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t a;

	a = 1;
	while (h->next != NULL)
	{
		h = h->next;
		a++;
	}

	if (h == NULL)
		return (0);
	return (a);
}
