#include "main.h"

/**
 *
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = j * i;
			if (j == 0 || j == 10)
			{
				_putchar(k);
			}
			else if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k);
			}
			else if (k > 10 && j != 10)
			{
				_putchar(',');
				_putchar(' ');
			}

			_putchar('\n');
		}
	}
}
