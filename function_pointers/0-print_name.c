#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that takes another function as an argument
 * @name: the name
 * @f: pointer to a function that actually prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
