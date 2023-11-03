#include <stdio.h>
#include "main.h"
/**
 * errf - checks for errors in the main
 * @file_to: destination of file content
 * @argv: argument vector
 * @file_from: file with original content
 * Return: returns void
 */
void errf(int file_from, int file_to, char *argv[])
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
}

/**
 * main - copies the content of one file to another
 * @argc: arg count
 * @argv: arg vector
 * Return: returns zero on success
 */
int main(int argc, char *argv[])
{
	char buff[1024];
	int file1;
	int file2, eclose;
	ssize_t no_char, nowr;

	if ((argc < 3) && (argc > 3))
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	errf(file1, file2, argv);

	no_char = 1024;
	while (no_char == 1024)
	{
		no_char = read(file1, buff, 1024);
		if (no_char > 1024)
			errf(-1, 0, argv);
		nowr = write(file2, buff, no_char);
		if (nowr == -1)
			errf(0, -1, argv);
	}
	eclose = close(file1);
	if (eclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file1);
		exit(100);
	}
	eclose = close(file2);
	if (eclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file2);
		exit(100);
	}
	return (0);
}

