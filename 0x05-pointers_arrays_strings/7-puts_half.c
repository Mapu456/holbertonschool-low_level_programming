#include "holberton.h"

/**
 * puts_half - print only one character out of two
 * @str: input
 * Return: number
 */
void puts_half(char *str)
{
	int i = 0;
	int c = 0;
	int n = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
	{
		for (n = (i - 1) / 2; n < i; n++)
		{
			_putchar (str[n]);
		}
	}
	else
	{
		c =  i / 2;
		for (n = c; n < i; n++)
		{
			if (str[n] != '\0')
			{
				_putchar (str[n]);
			}
		}
	}
	_putchar('\n');
}
