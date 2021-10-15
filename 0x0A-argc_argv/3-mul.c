#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc - number of arguements
 * @argv - numbers to multiply
 *
 *
 */

int main(int argc, char **argv)
{
	int num1 = atoi(argv[argc - 2]);
	int num2 = atoi(argv[argc - 1]);
	printf("%d\n", num1 * num2);
	return (EXIT_SUCCESS);
}
