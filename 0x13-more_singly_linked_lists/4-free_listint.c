#include "lists.h"

/**
 * free_listint -  free a linked list
 * @head: points to the head of the linked list to be freed
 * Return: void
 *
 */

void free_listint(listint_t *head)
{
listint_t *temps;

while (head != NULL)
{
head = head->next;
temps = head;
free(temps);
}

}

