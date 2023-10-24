#include "lists.h"
/**
 * add_nodeint_end - function that adds node to end of list
 * @head: head pointer to node
 * @n: integer
 *
 * Return: Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *current;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	current = *head;

	if (*head == NULL)
		*head = n_node;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = n_node;
	}

	return (*head);
}



