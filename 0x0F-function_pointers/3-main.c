#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - function
 * @argc:Argument counter
 * @argv:Argument vectors
 * Return: int
 */
int main(int argc, char argv[])
{
	int c;
	int i;

	int (pointerf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	pointerf = get_op_func(argv[2]);
	if (pointerf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = atoi(argv[1]);
	i = atoi(argv[3]);
	printf("%d\n", pointerf(c, i));
	return (0);
}
