#include <stdio.h>

/**
 * main - prints the alphabet
 * 
 * Return: always 0 (success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);
	putchar('\n');

	return (0);
}
