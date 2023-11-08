#include "main.h"
/**
 * prime_no - calculates or checks if a number is a prime number
 *
 * @c: input number
 *
 * @d: Divisor
 *
 * Return: 0
 *
 */
int prime_no(int c, int d)
{
	if (c <= 1 || (c != d && c % d == 0))
	{
		return (0);
	}
	else if (c == d)
	{
		return (1);
	}
	return (prime_no(c, d + 1));

}
/**
 * is_prime_number - checks for a prime number
 *
 * @n: The number inputed
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
return (prime_no(n, 2));
}

