#include "main.h"
/**
 *print_alphabet - Prints the alphabet in lower case
 *Description: prints the alphabet in lowercase
 *Returns: Always 0(Success)
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
return (0);
}

