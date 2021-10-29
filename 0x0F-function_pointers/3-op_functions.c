#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * op_add - adds two numbers a + b
 * @a: first num
 * @b: second num
 * Return: sum of numbers
 */
int op_add(int a, int b)
{
	int res;

	res = a + b;
	return (res);
}
/**
 * op_sub - Subtracts two numbers a - b
 * @a: first num
 * @b: second num
 * Return: difference of numbers
 */

int op_sub(int a, int b)
{
	int res;

	res = a - b;
	return (res);
}
/**
 * op_mul - multiplies two numbers a * b
 * @a: first num
 * @b: second num
 * Return: product of numbers
 */

int op_mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}
/**
 * op_div - divides two numbers a / b
 * @a: first num
 * @b: second num
 * Return: quotient of numbers
 */

int op_div(int a, int b)
{
	int res;

	res = a / b;
	return (res);
}
/**
 * op_mod - modulo two numbers a % b
 * @a: first num
 * @b: second num
 * Return: moduloed number
 */

int op_mod(int a, int b)
{
	int res;

	res = a % b;
	return (res);
}
