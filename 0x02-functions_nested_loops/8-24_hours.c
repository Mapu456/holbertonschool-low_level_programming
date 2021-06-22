#include "holberton.h"
/**
 * main - prints the sign of a number
 *Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hour;
	int min;

	hour = 0;

	while (hour < 24)
	{
		min = 0;

		while (min < 60)
		{
			_putchar ((hour / 10) + '0');
			_putchar ((hour % 10) + '0');
			_putchar (':');
			_putchar ((min / 10) + '0');
			_putchar ((min % 10) + '0');
		        _putchar('\n');
			min++;
		}
		hour++;
	}
}
	
		

	
