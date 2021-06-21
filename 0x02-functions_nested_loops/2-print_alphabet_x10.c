#include "holberton.h"
/**
 * main - prints 10 times the alphabet, in lowercase
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alp;

	while (alp < 5)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		alp++;
	}
}
