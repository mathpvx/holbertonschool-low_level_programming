#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies 2 numbers
 *
 * @argc: counts nbr of arguments
 *
 * @argv: arrays of strings for arguments
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i = 0, result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
