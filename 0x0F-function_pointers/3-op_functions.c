#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: returns addition
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: subtraction of the numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the mod of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The modulus of two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
