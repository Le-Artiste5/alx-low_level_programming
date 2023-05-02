#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * 
 * @head: points to the head of linked list to be freed
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *temps;

while (head != NULL)
{
temps = head;
head = head->next;
free(temps);
}

}
