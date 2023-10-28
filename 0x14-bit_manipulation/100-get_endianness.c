#include "main.h"
/**
 * get_endianness - checks for endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int check;
	int a;

	a = 1;

	check = (int) (((char *)&a)[0]);
	return (check);
}
