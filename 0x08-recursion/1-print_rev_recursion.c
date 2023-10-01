#include "main.h"
/**
 * _print_rev_recursion - string reverse function
 * @s: the string reversed
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);

	_putchar(*s);
}
else if (*s == '\0')
	return (0);
