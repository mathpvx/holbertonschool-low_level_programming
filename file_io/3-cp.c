#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * init_exit - function to switch error type
 * @number: exit number
 * @arg: argv
 * @fd: file descriptor
 * Return: 0.
 */
int init_exit(int number, char *arg, int fd)
{
	switch (number)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
		default:
			return (0);
	}
	exit(number);
}

/**
 * main - function to copy the content of a file to another file
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int file_from, file_to;
	ssize_t bytesRead, bytesWritten;

	if (argc != 3)
		init_exit(97, NULL, 0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		init_exit(98, argv[1], 0);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		init_exit(99, argv[2], 0);

	while ((bytesRead = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		if (bytesRead == -1)
			init_exit(98, argv[1], 0);

		bytesWritten = write(file_to, buffer, bytesRead);
		if (bytesWritten == -1)
			init_exit(99, argv[2], 0);
	}

	if (close(file_from) == -1 || close(file_to) == -1)
		init_exit(100, NULL, file_from);

	return (0);
}
