#include "main.h"

/**
 *power_operator: returns the square root
 *_sqrt_recursion - A function that provides the natural square root of a number
 *@n: input number
 *@b: Iterating number
 *
 * Return: Either square root of number or -1
 */

int power_operator(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return(sqrt_a(a, b + 1));

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
