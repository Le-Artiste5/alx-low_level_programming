#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: The name of the file
 * @text_content: A null terminated string
 * Return: Return 1 if success, and -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int descriptor, nol, rw;

	if (filename == NULL)
		return (-1);

	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (descriptor == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	nol = 0;
	while (text_content[nol])
	{
		;
		nol++;
	}
	rw = write(descriptor, text_content, nol);

	if (rw == -1)
		return (-1);
	close(descriptor);
	return (1);
}
