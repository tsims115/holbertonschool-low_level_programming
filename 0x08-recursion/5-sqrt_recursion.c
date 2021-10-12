#include "main.h"


/**
 *_sqrt_num - takes _sqrt_recursion n and finds the square root if possible
 *@n: Take square root of this number
 *@guess: guess to see what is square root
 *
 *Return: square root or -1 if none is found
 */

int _sqrt_num(int n, int guess)
{
        if (guess * guess == n)
                return guess;
        if (guess * guess > n)
                return (-1);
        return (_sqrt_num(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the value of x raised to the power of y
 * @n: number to take square root of
 *
 * Return: return value of x raised to y
 *
 */

int _sqrt_recursion(int n)
{
	int guess = 1;

	return _sqrt_num(n, guess);
}
