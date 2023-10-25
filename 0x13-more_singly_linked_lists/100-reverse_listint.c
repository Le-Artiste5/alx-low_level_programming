#include "lists.h"
/**
 * reverse_listint - function that reverses a list
 * @head: head pointer to node
 * Return: a struct node value
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *new_curr;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	current = *head;
	*head = current->next;

	current->next = NULL;

	while (*head == NULL)
	{
		new_curr = (*head)->next;
		new_curr = current;
		current = *head;

		if (new_curr == NULL)
			return (*head);
		new_curr = *head;
	}

	if (*head == NULL)
	{
		*head = current;
		return (*head);
	}


	return (NULL);
}
