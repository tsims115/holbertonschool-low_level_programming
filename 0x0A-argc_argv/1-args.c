#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints amount of arguements
 * @argc: how many arguements
 * @argv: array of char pointers arguements
 *
 * Return: EXIT_SUCCESS if successful
 *
 */

int main(int argc, char **argv)
{
	if (*argv != 0)
	{
		printf("%d\n", argc - 1);
	}
	return (EXIT_SUCCESS);
}
