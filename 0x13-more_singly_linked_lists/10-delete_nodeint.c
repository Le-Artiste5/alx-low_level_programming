#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index
 * @index: index of node to be deleted
 * @head: head pointer to first node
 * Return: 1 if succes, and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *current, *new_node;

	new_node = NULL;

	current = *head;
	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	i = 0;
	while (i < index - 1 && index != 0 && current != NULL)
	{
		current = (current)->next;
		i++;
	}

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		new_node = current->next;
		free(current);
		*head = new_node;
	}
	else
	{
		if (current->next == NULL)
			current->next = new_node;
		else
			new_node = current->next->next;
		free(current->next);
		current->next = new_node;
	}

	return (1);
}
