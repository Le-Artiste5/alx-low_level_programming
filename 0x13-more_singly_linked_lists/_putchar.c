#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _putchar - function that writes output
 * @c: char
 *
 * Return: The output
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
