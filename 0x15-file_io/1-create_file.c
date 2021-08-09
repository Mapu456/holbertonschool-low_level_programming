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
* Return: 0 if it fails
*/
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int wr = 0;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	else
	{
		wr = write(fd, text_content, i);
		if (wr == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
