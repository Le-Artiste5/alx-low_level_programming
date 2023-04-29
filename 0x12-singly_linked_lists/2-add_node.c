#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds new node to the beginning of linked list list_t
 * @head: A pointer that points to the head of list_t
 * @str: new string to be added in the node
 *
 *
 * Return: the address of the new element, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
