#include <stdio.h>
/**
 * main - A program that prints all arguments on different lines
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: argument
 */

int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
