#include "lists.h"
/**
 * pop_listint - Deletes the head node of a list
 * @head: head pointer to first node
 *
 * Return: zero if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);


	n = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);

	return (n);
}


