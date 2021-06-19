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
	char let;

	for (alp = '0'; alp <= '9'; alp++)
	{
		for (let = 'a'; let <= 'f'; let++)
		putchar(alp);
		putchar(let);
	}
	putchar('\n');
	return (0);
}
