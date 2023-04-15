#include <stdio.h>
#include "main.h"

/**
 * main - Program prints everything entered into it
 * @argv: Argument vector
 * @argc: Argument counter
 *
 * Return: Always return 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

