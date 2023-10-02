#include <stdio.h>
/**
 * main - a program that prints a number followed by a new line
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: (0);
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

