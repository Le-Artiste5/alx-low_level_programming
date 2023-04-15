#include <stdio.h>
#include "main.h"
/**
 * main - Program counts the number of arguments inputed into it
 * @argc: Counts the number of arguments
 * @argv: This is the argument vector
 * Return: Aalways return 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("Number of arguments passed into argc: %d\n", argc);
	return (0);
}
