#include "lists.h"
/**
 * reverse_listint - Used to reverse a linked list
 * @head: points to first node in a list
 * Return: Pointer to node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *behind = NULL;
listint_t *front = NULL;

while (*head)
{
front = (*head)->front;
(*head)->front = behind;
behind = *head;
*head = front;
}
*head = behind;

return (*head);
}

