#include "lists.h"
/**
 * add_node_end - a function that adds node
 * @head: pointer to first node
 * @str: string of chars
 * Return: points to head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *temp;

	temp = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	n_node = makenode(str);

	if (n_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = n_node;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = n_node;

	return (*head);

}
/**
 * makenode - creates a node
 * @str: a string
 *
 * Return: points to string
 */
list_t *makenode(const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	n_node->len = lent(str);
	n_node->next = NULL;

	return (n_node);
}

/**
 * lent - lenght of a used string
 * @str: a string
 *
 * Return: length
 */
int lent(const char *str)
{
	int a;

	if (str == NULL)
		return (0);
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	return (a);
}
