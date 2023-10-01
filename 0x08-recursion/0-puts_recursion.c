#include "main.h"

/**
 * _puts_recursion - recursive function to print character on screen
 * @s: points to the string
 *
 * Return: SUCCESS
 *
 */

void _puts_recursion(char *s)


{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
