#include <stdio.h>

/**
 * main - prints numbers of base 16
 */

int main(void)
{
	int n;
	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	}
	
	char l;
	for (l = 'a'; l <= 'f'; l++)
	{
	putchar(l);
	}

	return (0);
}
