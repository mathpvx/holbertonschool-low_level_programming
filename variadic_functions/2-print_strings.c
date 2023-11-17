#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: between each string
 * @n: number of strings passed as arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *value;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char*);
		if (value == NULL)
			printf("(nil)");

		else
			printf("%s", value);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
