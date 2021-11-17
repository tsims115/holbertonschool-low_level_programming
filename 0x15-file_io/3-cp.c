#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - copies a file to another
 * @argc: number of arguements
 * @argv: arguements themselves
 * Return: 0 if succesful and -1 if not
 */

int main(int argc, char **argv)
{
	int srcd, to, rd, wr, c;
	char buf[1024];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	srcd = open(argv[1], O_RDONLY);
	if (srcd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	rd = read(srcd, buf, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	wr = write(to, buf, rd);
	if (to == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c = close(to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", to);
		exit(100);
	}
	close(srcd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", srcd);
		exit(100);
	}
	return (1);
}
