#include "lists.h"
/**
 * pop_listint - function that deletes the head of a node in a linked list
 * @head: points to first element of a linked list
 *
 * Return: 0 if list is empty or data inside element that was deleted
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
int val;

if (!head || !*head)


return (0);

val = (*head)->n;
tmp = (*head)->next;
free(*head);

*head = tmp;
return (val);
}

