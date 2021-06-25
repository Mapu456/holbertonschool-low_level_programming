#include "holberton.h"

/**
 * _isupper - checks uppercase character
 * @c: the int
 * Return: 1 if c is uppercase, 0 otherwise
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
