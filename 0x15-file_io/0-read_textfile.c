#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the posix output
 * @filename: the name of the file
 * @letters: the number of letters it should have
 * Return: actual number of letters it should print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
}
