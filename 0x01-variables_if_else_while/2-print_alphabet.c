#include <stdio.h>
/**
 * main - print letters of the English alphabet
 *
 * Description: This program prints the letters of the English alphabet
 * 
 * Return: 0(SUCCESS)
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
