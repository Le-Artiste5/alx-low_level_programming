#include "variadic_functions.h"
/**
 * print_all - A function that literally prints anything
 * @format: list of types of arguments
 *
 * Return: string and new line
 */

void print_all(const char * const format, ...)
{
	char *string;

	int i, status;

	va_list form;

	va_start(form, format);
	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(form, int));
				status = 0;
				break;
			case 'f':
				printf("%d", va_arg(form, int));
				status = 0;
				break;
			case 'c':
				printf("%c", va_arg(form, int));
				status = 0;
				break;
			case 's':
				string = va_arg(form, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				status = 1;
				break;
		}
		if (status != 0 && format[i + 1] != '\0')
			printf(", ");
		++i;
	}
	printf("\n");
	va_end(form);
}

