#include "lists.h"
/**
 * reverse_listint - used to reverse a linked list
 * @head: points to first node in a list
 * 
 * Return: return pointer to node in the recent list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prv = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next Â= prv;
prv = *head;
*head = next;
}
*head = prv;
return (*head);
}

