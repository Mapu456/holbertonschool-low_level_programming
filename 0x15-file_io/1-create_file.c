#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"
/**
* create_file - function
* @filename: name of the file
* @text_content: number of letters that we should read and print
* Return: 1
*/
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	else
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
		}
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}

