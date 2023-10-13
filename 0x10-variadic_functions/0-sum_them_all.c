#include "variadic_functions.h"
/**
 * sum_them_all - sum of parameters
 *
 * @n: no of arguments passed
 *
 * Return: The sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int a;

	va_list store;

	va_start(store, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
			sum += va_arg(store, const unsigned int);
	}

	va_end(store);
	return (sum);
}

