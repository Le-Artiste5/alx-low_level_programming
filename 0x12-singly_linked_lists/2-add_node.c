#include "lists.h"

/**
 * add_node - adds node
 * @str: string
 *
 * @head: head pointer
 * Return: pointer to next node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	unsigned int a;
	unsigned int iterate = 0;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
	{
		a++;
		iterate++;
	}
	n_node->str = strdup(str);
	n_node->len = iterate;
	n_node->next = *head;
	*head = n_node;

	return (*head);

}

