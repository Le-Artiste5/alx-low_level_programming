#include "main.h"
/**
 * set_bit - sets value of bit to 1
 * @n: decimal number
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t cover;

	if (index > sizeof(size_t) * 8)
		return (-1);

	cover = 1;
	cover = cover << index;
	*n = (cover | (*n));

	return (1);
}
