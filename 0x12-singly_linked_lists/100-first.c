#include "lists.h"
void domfunc(void) __attribute__ ((constructor));

/**
 * domfunc - overrides main
 */

void domfunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
