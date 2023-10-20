#include "main.h"

/**
 * _isalpha - check alphabetic char
 *
 * @c: char
 *
 * Return: 1 if letter 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
