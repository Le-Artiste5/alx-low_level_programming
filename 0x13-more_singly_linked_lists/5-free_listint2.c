#include "lists.h"
/**
 * free_listint2 - frees linked list
 * @head: points to the linked list to be freed
 */
void free_listint2(listint_ **head)
{
listint_t *tmp;
if (head == NULL)
return ;
while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}

*head = NULL;
}

