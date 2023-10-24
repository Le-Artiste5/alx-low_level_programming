#include "lists.h"
/**
 * listint_len - Returns number of elements in a linked list
 * @h: head pointer to first node
 *
 * Return: the number of elements in a list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
