#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list (listint_t)
 * @h: points to the head of the list
 *
 * Return: the number of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
size_t sum = 0;
while (h)
{
sum++;
h = h->next;
}
return (sum);
}

