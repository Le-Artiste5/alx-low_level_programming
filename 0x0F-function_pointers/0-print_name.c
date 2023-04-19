#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name using pointer to function
 * @name: string to be added through code
 * @f: points to the specified function 
 * Return: Nothing
 **/

void print_name(char *name, void (*f)(char*))
{
if (name == NULL || f == NULL)
return ;
f(name);
}

