#include "main.h"
/**
 * read_textfile - reads a text file and prints to the OS
 * @letters: number of letters to be printed
 * @filename: the file that we should read
 *
 * Return: Prints the amount of characters or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t readon;
	int descriptor;
	ssize_t showoff;

	if (filename == NULL)
		return (0);
	
	descriptor = open(filename, O_RDONLY);

	if (descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	readon = read(descriptor, buffer, letters);
	showoff = write(STDOUT_FILENO, buffer, readon);

	close(descriptor);
	free(buffer);

	return (showoff);
}
