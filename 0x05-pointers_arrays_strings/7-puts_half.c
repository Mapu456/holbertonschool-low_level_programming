#include "holberton.h"

/**
 * puts_half - print only one character out of two
 * @str: input
 * Return: number
 */
void puts_half(char *str)
{
	int i;
	int c;
	int n;

	for (i = 0; *(str + i); i++)
	{
		if (i % 2 == 0)
		{
			c = i / 2;
			_putchar (str[c]);
		}
		else
		{
			n = ((i - 2) / 2);
			_putchar (str[n]);
		}
	}
	_putchar('\n');
}
