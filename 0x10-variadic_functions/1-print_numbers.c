#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @n: number of integers
 * @separator: string to be printed between numbers
 * Return: Nothing if sepeartor is NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int  a, sep;

	va_list ptrr;

	va_start(ptrr, n);

	for (a = 0; a < n; a++)
	{
		sep = va_arg(ptrr, const unsigned int);
		printf("%d", sep);

		if (separator != NULL && a != (n - 1))
			printf("%s", separator);

	}

	printf("\n");

	va_end(ptrr);
}
