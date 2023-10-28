#include "main.h"
/**
 * binary_to_uint - Converts binary to an unsigned int
 * @b: points to the char
 * Return: 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int base;
	size_t x, y, mul, lent, add;

	mul = 1;
	base = 2;
	add = 0;

	if (b == NULL)
		return (0);
	lent = 0;
	while (b[lent] != '\0')
	{
		;
		lent++;
	}

	if ((b[0] == '1' || b[0] == '0') && lent == 1)
		return (b[0] - 48);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '1' && b[x] != '0')
			return (0);

		for (y = lent - 1; y > 0; y--)
		mul = mul * base;

		add = add + (mul * (b[x] - 48));
		lent--;
		mul = 1;

	}

	return (add);
}


