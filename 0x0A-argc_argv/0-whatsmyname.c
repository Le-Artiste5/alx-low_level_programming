#include <stdio.h>
#include "main.h"

/**
 * main - This program prints its own name
 * 
 * @argv: array of arguments inputed in program
 * @argc: number of arguments or argument count
 *
 * Return: Always return 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
