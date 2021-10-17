#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out the arguements themselves
 * @argc: how many arguements
 * @argv: array of char pointers arguements
 *
 * Return: EXIT_SUCCESS if succesful
 *
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (argv[i] != argv[argc])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (EXIT_SUCCESS);
}
