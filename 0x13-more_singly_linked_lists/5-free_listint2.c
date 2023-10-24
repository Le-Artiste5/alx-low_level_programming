#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: head pointer to node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;
	if (head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	free(*head);


	*head = NULL;
}
