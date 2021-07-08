#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints name
 * @argv: array whit arguements
 * @argc: number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
     			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
