#include "main.h"
/**
 * _strlen_recursion - helps get the string length
 * @s: string of characters
 *
 * Return: The length of the inputed string
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * com_string - compares characters in the string
 * @s: The string ton be checked
 * @s_iterator: least iterator
 *
 * @l_iterator: largest iterator
 *
 * Return: returns an integer
 */
int com_string(char *s, int s_iterator, int l_iterator)
{
	if (*(s + s_iterator) == *(s + l_iterator))
	{
		if (s_iterator == l_iterator || s_iterator == l_iterator + 1)
			return (1);
	return (0 + com_string(s, s_iterator + 1, l_iterator - 1));
	}

	return (0);

}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if it is a palindrome and 0 if not
 *
 *
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (com_string(s, 0, _strlen_recursion(s) - 1));
}
