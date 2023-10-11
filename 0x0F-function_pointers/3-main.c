#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs calculator operatiosn
 * @argv: argument counter
 * @argv: vector
 *
 * Return: result of operation
 */

int main(int argc, int *argv[])
{
	int num1, num2;
	char *op;

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num2 = atoi(argv[3]);
	op = (argv[2]);
	num1 = atoi(argv[1]);


	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}


	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
