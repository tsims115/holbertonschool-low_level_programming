#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: file to be opened and printed
 * @letters: number of letter it should read and print
 * Return: 0 if fails or if write fails or number of letters it read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	n = read(fd, buf, letters);
	if (n == -1)
		return (0);
	n = write(1, buf, letters + 1);
	if (n == -1)
		return (0);
	free(buf);
	close(fd);
	return (n);
}
