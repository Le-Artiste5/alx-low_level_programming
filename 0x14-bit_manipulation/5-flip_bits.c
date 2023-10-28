#include "main.h"
/**
 * flip_bits - returns number needed to flip bits
 * @m: number
 * @n: number 2
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t  res, iterate;

	res = n ^ m;
	for (iterate = 0; res > 0;)
	{
		if ((res & 1) == 1)
			iterate++;
		res = res >> 1;
	}

	return (iterate);

}

