#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given position
 * @idx: index
 * @head: head pointer
 * @n: integer
 * Return: Adress of node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *pointer1, *pointer2;
	size_t a;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);

	pointer1 = *head;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	if (idx == 0)
		for (a = 0; idx != 0 && a < idx - 1 && pointer2 != NULL; a++)
		{
			pointer1 = pointer1->next;
			a++;
		}
	if (pointer1 == NULL)
		return (NULL);
	if (idx == 0)
		new->next = pointer1;
	else
	{
		*pointer2 = pointer1->next;
		pointer1->next = new;
		new->next = pointer2;
	}
	return (new);

}
