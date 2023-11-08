#include "main.h"
/**
 * power_operator - returns the square root
 *
 * @e: input number
 *
 * @f: Iterating number
 *
 * Return: Either square root of number or -1
 */
int power_operator(int e, int f)
{
	if (f * f > e)
	{
		return (-1);
	}
	if (f * f == e)
	{
		return (f);
	}
	return (power_operator(e, f + 1));
}
/**
 * _sqrt_recursion - natural square root of number
 * @n: number
 *
 * Return: The aquare root
 */
int _sqrt_recursion(int n)
{
	return (power_operator(n, 0));
}
