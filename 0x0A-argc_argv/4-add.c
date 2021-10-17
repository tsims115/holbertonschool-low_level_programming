#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds two numbers
 * @argc: number of arguements
 * @argv: numbers to add are index 1 and 2
 *
 * Return: EXIT_SUCCESS if successful and return 1 if no arguements
 *
 */

int main(int argc, char **argv)
{
	int i;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}
	i = 1;
	sum = 0;
	while (argv[i] != argv[argc])
	{
		if  (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}