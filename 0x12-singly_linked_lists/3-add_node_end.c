#include "lists.h"
list_t *create_node(const char *str);

/**
 * add_node_end - a function that adds node
 * @head: pointer to first node
 * @str: string
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int a;
	unsigned int iterate;

	list_t *n_node, *temp;

	n_node = *head;

	temp = malloc(sizeof(list_t));

	a = 0;
	while (str[a] != '\0')
	{
		a++;
		iterate++;
	}

	temp->str = strdup(str);
	temp->len = iterate;

	temp->next = NULL;

	if (n_node == NULL)
		*head = temp;
	else
	{
		while (n_node->next != NULL)
	{
		n_node = n_node->next;
	}
	}
	n_node->next = temp;
	return (*head);

}
