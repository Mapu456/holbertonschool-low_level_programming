#include "holberton.h"
/**
 * main - prints the sign of a number
 *Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hour, min, i;

	for (i = 0; i <= 1439; i++)
	{
		hour = i / 60;
		min = i % 60;
		_putchar (hour);
		_putchar (':');
		_putchar (min);
		_putchar (min);
	}
	_putchar ('\n');

}
