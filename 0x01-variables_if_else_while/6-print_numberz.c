#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
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
