#include <stdio.h>
/**
 * main - prints alphabet except q and e 
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
		
		if (a != 'q' && a != 'e')
	{
        putchar(a);
        }
	putchar('\n');

	return (0);
}
