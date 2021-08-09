#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"
/**
* read_textfile - function
* @filename: name of the file
* @letters: number of letters that we should read and print
* Return: 0 if it fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int rd;
	int wr;
	int c;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (NULL);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		return (0);
	}
	wr = write(1, buf, letters);
	if (wr == -1)
	{
		return (0);
	}
	c = close(fd);
	if (c == -1)
	{
		return (0);
	}
	free(buf);
	return (fd);
}
