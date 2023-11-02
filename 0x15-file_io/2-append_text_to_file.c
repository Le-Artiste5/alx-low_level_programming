#include "main.h"
/**
 * append_text_to_file - adds a text to the end of a file
 * @text_content: A string with a terminating NULL
 * @filename: The name of file to add text to
 * Return: returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int descriptor, nol, rw;

	descriptor = open(filename, O_WRONLY | O_APPEND);

	if (descriptor == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		nol = 0;
		while (text_content[nol])
		{
			;
			nol++;
		}
		rw = write(descriptor, text_content, nol);
		if (rw == -1)
			return (-1);
	}
	close(descriptor);

	return (1);
}



