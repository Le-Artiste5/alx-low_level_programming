#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at index in a list
 * @head: pointer to first node of linked list
 *
 * @index: index to be returned
 * Return: pointer to node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp = head;
unsigned int a = 0;

while (tmp && a < index)
{
a++;
tmp = tmp->next;
}

return(tmp ? tmp : NULL);
}

