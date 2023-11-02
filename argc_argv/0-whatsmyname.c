#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of its own
 *
 * @argc: counts the number of arguments
 *
 * @argv: array of strings of command line arguments
 *
 * Return: 0 success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
