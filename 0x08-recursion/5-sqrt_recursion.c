#include "main.h"

/**
 *power_operator: returns the square root
 *_sqrt_recursion - A function that provides the natural square root of a number
 *@e: input number
 *
 *@f: Iterating number
 *
 * Return: Either square root of number or -1
 */

int power_operator(int e, int f)
{
	if (f * f == e)
	{
		return (f);
	}
	else if (f * f > e)
	{
		return (-1);
	}
	return(power_operator(e, f + 1));

int _sqrt_recursion(int n)
{
	return (power_operator(n, 0));
}
