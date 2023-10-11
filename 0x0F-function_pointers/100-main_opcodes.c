#include <stdlib.h>
#include <stdio.h>

/**
 * p_opcodes - displays upcodes
 * @x: address of function
 *
 * @y: number of bytes to display
 */

void p_opcodes(char *x, int y)
{
	int a;

	for (a = 0; a < y; a++)
	{
	printf("%.2hhx", x[a]);
	if (a < y - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main - print opcodes
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int y;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	y = atoi(argv[1]);
	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p_opcodes((char *)&main, y);
	return (0);
}
