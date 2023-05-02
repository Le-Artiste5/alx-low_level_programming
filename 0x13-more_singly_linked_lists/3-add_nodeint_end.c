#include "lists.h"
/**
 * add_nodeint_end - Function that adds node to the end of a linked list
 * @head: points to address of the head of the linked list
 * @n: The integer that will be in the new node
 *
 * Return: Null if fails or address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *recent, *extreme;
recent = malloc(sizeof(listint_t));

if (recent == NULL)
return (NULL);

recent->n = n;
recent->next = NULL;

if (*head == NULL)
*head = recent

else
{
extreme = *head;
while (extreme->next != NULL)
extreme = extreme->next;
extreme->next = recent;
}
return (*head);
}

