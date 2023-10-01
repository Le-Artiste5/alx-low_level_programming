/**
 *_putchar - writes the character c to stdout
 *@c: The Character to print
 *Return: on success 1
 *On error, -1 is returned, amd err no is set approximately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
