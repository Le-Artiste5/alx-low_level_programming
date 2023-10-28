#include "main.h"
/**
 * binar - converts to binary
 * @n: number
 */
void binar(unsigned long int n)
{
	if (n == 0)
		return;
	binar(n >> 1);
	if ((n & 1) == 0)
		_putchar('0');
	if ((n & 1) == 1)
		_putchar('1');
}
/**
 * print_binary - prints binary rep of a number
 * @n: decimal
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		binar(n);
	}
}
