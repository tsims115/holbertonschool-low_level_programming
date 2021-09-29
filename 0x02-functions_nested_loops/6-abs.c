#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @num: get abs of this parameter
 *
 * Return: the abs of the parameter
 *
 */

int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}
