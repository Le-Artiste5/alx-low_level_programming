#include "main.h"
/**
 * wildcmp - A function that compares two strings
 * @s1: Number 1 string
 * @s2: second string
 *
 * Return: outputs 1 if identical, and 0 if not identical.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *(s2 + 1) != '\0' && *s2  == '*')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1,  s2 + 1));
	return (0);
}
