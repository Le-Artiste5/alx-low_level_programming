#include "lists.h"
/**
 * sum_listint - sums all data in a linked list
 * @head: head pointer to first node
 *
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int addition;
	addition = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		addition = addition + head->n;
		head = head->next;
	}


	return (addition);
}


