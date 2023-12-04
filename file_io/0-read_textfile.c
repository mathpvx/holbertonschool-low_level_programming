#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - open, read and print a text from a file
 * @filename: pointer to the name of the file
 * @letters: number of letters read and printed
 * Return: number of char printed if success, 0 if fails
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

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);
	return (w);
}
