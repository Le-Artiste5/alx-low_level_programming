/*
 * File: 0-print_listint.c
 * Authour: Johnson Otobong
 *
 */
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of listint_t
 * @h: points to the head of the list_t
 *
 * Return: number of nodes in the list_t
 */

size_t print_listint(const listint_t *h)
{
const listint_t *trail = h;
size_t sum = 0;

while (trail != NULL)
{
sum++;
printf("%d\n", trail->n);
trail = trail->next;
}
return (sum);
}

