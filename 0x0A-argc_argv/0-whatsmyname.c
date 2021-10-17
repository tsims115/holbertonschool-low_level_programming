#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: how many arguements
 * @argv: array of char pointers arguements
 *
 * Return: ESIT_SUCCESS if successful
 *
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (EXIT_SUCCESS);
}
