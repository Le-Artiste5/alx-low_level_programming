#include "lists.h"
/**
 * add_nodeint - adds new node to beginning of a list
 * @head: head pointer to first node
 * @n: integer
 * Return: new node to beginning of a list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (0);

	else
	{
		n_node->n = n;
		n_node->next = *head;
		*head = n_node;
	}
	return (*head);
}
