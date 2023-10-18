#include <stdio.h>

/**
 * main - prints numbers of base 16
 */

int main(void)
{
	char n;
	for (n = '0'; n <= '9'; n++)
	for (n = 'a'; n <= 'f'; n++)
	{
	putchar(n);
	}
	return (0);
}
