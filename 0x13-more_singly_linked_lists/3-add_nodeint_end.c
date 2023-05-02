#include "lists.h"
/**
 * Description: A function that adds new node to the end of linked list
 * @head: points to the address of the head of linked list
 *
 * @n: new integer to be contained in node
 * Return: NULL if function fails or address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *fresh, *rear;
fresh = malloc(sizeof(listint_t));

if (fresh == NULLâ€)
return (NULL);

fresh->n = n;
fresh->next = NULL;

if (*head == NULL)
*head = new;

else
{
rear = *head;
while (rear->next != NULL)
rear->next = fresh;
}
return (*head);
}

