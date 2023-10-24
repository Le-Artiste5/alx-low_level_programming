#include "lists.h"
/**
 * free_listint - function which frees a list
 *
 * @head: head pointer to node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		head = head->next;
		free(current);
	}
}

