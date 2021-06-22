#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * @i: is int
 *Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar((i * i) + '0');
	}
	_putchar('\n');
}
