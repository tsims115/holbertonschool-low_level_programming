#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to write to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	n = write(fd, text_content, sizeof(text_content));
	if (n == -1)
		return (-1);
	close(fd);
	return (1);

}
