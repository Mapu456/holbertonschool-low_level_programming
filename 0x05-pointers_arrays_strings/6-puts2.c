#include "holberton.h"

/**
 * puts2 - print only one character out of two
 * @str: input
 * Return: number
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
		{
			_putchar (str[c]);
		}
	}
	_putchar('\n');
}
