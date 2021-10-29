#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - takes in arguements and perform operation on them
 * @argc: number of arguements
 * @argv: arguements
 *
 *
 * Return: 0 if successful
 *
 */

int main(int argc, char **argv)
{
	int num1;
	int num2;
	int res;
	char *op;
	int (*pop)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	if (*op != 43 && *op != 45 && *op != 42 && *op != 47 && *op != 37)
	{
		printf("Error\n");
		exit(99);
	}
	num2 = atoi(argv[3]);
	if (((*op == 37) || (*op == 47)) && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	pop = get_op_func(op);
	res = pop(num1, num2);
	printf("%d\n", res);
	return (0);
}
