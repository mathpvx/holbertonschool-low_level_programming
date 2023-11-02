#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments of the command line
 *
 * @argc: number of arguments
 *
 * @argv: array of strings
 *
 * Return: 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
