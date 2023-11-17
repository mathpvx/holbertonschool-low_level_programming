#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: between each number
 * @n: the number of arguments passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int value;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, unsigned int);
		printf("%d", value);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
