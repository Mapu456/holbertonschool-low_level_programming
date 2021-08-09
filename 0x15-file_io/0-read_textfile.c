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

	fd = open("filename", O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}
	close(fd);
}
