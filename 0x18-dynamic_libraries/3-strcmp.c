#include "main.h"
/**
 * _strcmp - concatenates two strings
 * @s1: strings
 * @s2: strings
 * Return: number
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		i++;
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
