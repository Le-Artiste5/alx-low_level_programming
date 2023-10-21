#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to initial node
 *
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;

		free(head->str);

		free(head);

		head = temp;
	}
	free(head->str);

	free(head);
}
