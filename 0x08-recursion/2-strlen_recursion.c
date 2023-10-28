#include "main.h"
/**
 * _strlen_recursion - function that prints length of a string
 *
 * @s: The string that is to be counted
 * Return: number of the characters present in the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
