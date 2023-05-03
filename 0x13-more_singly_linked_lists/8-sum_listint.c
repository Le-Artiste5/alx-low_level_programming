#include "lists.h"
/**
 * sum_listint - computes sum of all data in linked list
 * @head: first node (ponter)
 *
 * Return: computed sum
 */

int sum_listint(listint_t *head)
{
int comp Â= 0;
listint_t *temp = head;

while (temp)
{
comp += temp->n;
temp = temp->next;
}
return (comp);
}

