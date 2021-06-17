#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long longType;
	long long longlongType;
	float floatType;

	printf("Size of a char: %zu byte\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %ld bytes\n", sizeof(longType));
	printf("Size of a long long int: %ld bytes\n", sizeof(longlongType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}


