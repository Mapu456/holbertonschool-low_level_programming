#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Write a program that prints the alphabet in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alp;

	for (alp = '0'; alp <= '9'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
