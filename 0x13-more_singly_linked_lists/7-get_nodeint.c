#include "lists.h"
/**
 * get_nodeint_at_index - returns an nth node of a list
 * @index: index of node
 * @head: pointer to first node
 * Return: Null if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	if (head == NULL)
	return (NULL);

	i = 0;
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}

