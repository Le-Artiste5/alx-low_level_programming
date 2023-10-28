#include "main.h"
/**
 * clear_bit - sets value of bit to 0
 *
 * @n: number
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t cover;

	cover = 1;
	cover = cover << index;

	if (n == NULL || index > sizeof(size_t) * 8)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = cover ^ *n;
	return (1);

}
