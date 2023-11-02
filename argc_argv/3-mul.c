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
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
