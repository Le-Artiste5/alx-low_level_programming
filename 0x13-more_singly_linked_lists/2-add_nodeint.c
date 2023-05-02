/**
 * File: 2-add_nodeint.c
 * Author: Johnson Otobong
 */

#include "lists.h"
/**
 * add_nodeint - a function that adds node to the beginning of a linked list
 * @head: points to head of a list
 * @n: n number of elements
 *
 * Return: NULL if fails or address of new element
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *recent;
recent = malloc(sizeof(listint_t));
if (recent == NULL)
return (NULL);

recent->n = n;
recent->next = *head;
*head = recent;
return (recent);
}
