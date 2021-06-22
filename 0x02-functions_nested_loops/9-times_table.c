#include "holberton.h"

/**
 * times_table - print table nine
 */
void times_table(void)
{
	int n;
	int c;
	int l;

	for (n = 0; n < 10; n++)
	{
		for (c = 0; c < 10; c++)
		{
			l = c * n;
			if (c == 0)
			{
				_putchar(l + '0');
			}

			if (l < 10 && c != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			} else if (l >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
