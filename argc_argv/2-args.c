#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 *
 * @argc: counts number of arg
 *
 * @argv: strings of arg
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
