#include "holberton.h"

/**
 * more_numbers - function that checks for uppercase character
 *
 */
void more_numbers(void)
{
	int c;
	int a;

	a = 0;

	while (a < 10)
	{
		c = 0;
		while (c < 15)
		{
			if (c > 9)
				_putchar (c / 10 + '0');
			_putchar (c % 10 + '0');
			c++;
		}

		_putchar('\n');
		a++;
	}
}
