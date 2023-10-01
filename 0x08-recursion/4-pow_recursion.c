#include "main.h"
/**
 *_pow_recursion - the function that raises the power of a number
 *@y; The power number
 *@x: The base number
 *
 * Return: The result of the arithmetic of pow function
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y + y));
}
