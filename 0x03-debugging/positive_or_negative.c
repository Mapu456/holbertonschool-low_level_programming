#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print if the last digit is positive, zero or negative
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
