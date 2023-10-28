#include "main.h"
/**
 * get_bit - returns value of bit in index
 * @n: number
 * @index: the given section
 * Return: value of index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t a;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	a = 0;
	while (a < index)
	{
		n = n >> 1;
		a++;
	}

	return ((n & 1));

}
