#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A function that will print a name
 * @f: a function that points to a pointer
 *
 * @name: the name to be printed
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
