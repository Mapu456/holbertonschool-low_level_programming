#include <stdio.h>
/**
 * main - causes an infinite loop
 * @i: is the variable
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	
	/main - causes an infinite loops/
	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
