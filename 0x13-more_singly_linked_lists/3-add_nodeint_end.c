/**
 * File: 3-add_nodeint_end.c
 * Author: Johnson Otobong 
 */

#include "lists.h"
/**
 * add_nodeint_end - function that adds node to the end of a linked list
 * @head: points to the address of the head of a linked list
 * @n: The integer that will be in new node
 *
 * Return: NULL if function fails or address of the new element
 *â€/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *recent, *extreme;
recent = malloc(sizeof(listint_t));
if (recent == NULL)
return (NULL)â€;

recent->n = n;
recent->next = NULL;

if (*head == NULL)
*
*head = recent;
else
{
extreme = *head;
while (extreme->next != NULL)
extreme = extreme->next;
extreme->next = recent;
}

return (recent);
}

