#include "lists.h"
/**
 * print_listint - prints all elements in a list
 *
 * @h: head pointer to node
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t elements;

	if (h == NULL)
		return (0);

	elements = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}

