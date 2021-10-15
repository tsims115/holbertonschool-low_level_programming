#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints amount of arguements
 * @argc: how many arguements
 * @argv: array of char pointers arguements
 *
 *
 *
 */

int main(int argc, char **argv)
{
	if (*argv != 0)
	{
		printf("%d\n", argc);
	}
	return (EXIT_SUCCESS);
}
