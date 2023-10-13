#include "variadic_functions.h"
/**
 * print_strings - prints strings and new line
 * @separator: string printed btwn strings
 * @n: number of strings passed
 *
 * Return: Dont print if separator is null
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;

	unsigned int a;

	va_list ptrr_string;

	va_start(ptrr_string, n);

	for (a = 0; a < n; a++)
	{
		string = va_arg(ptrr_string, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", string);
		if (separator != NULL && a != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(ptrr_string);
}

