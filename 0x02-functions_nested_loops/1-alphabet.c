#include "holberton.h"
/**
 * print_alphabet -  in lowercase
 * main - prints the alphabet, in lowercase, followed by a new line
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
