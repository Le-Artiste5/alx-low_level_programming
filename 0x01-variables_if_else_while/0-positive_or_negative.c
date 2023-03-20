#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-Determines when a random number is either positive  *main-Determines when a random number is either positive, negative or zero
 *Return: Always 0(SUCCESS)
 */
int main(void)
{
int n;
srand(time(0);
n = rand() - RAND_AX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
