#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the multiplication of two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on success and err on failure
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
		}
		printf("Error\n");
		return (1);

}
