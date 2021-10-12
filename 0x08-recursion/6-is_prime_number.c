#include "main.h"
/**
 * _prime_number - checks to see if prime number
 * @n: number to check
 * @guess: guess to see if prime number
 *
 * Return: 0 if not prime and 1 if prime
 */

int _prime_number(int n, int guess)
{
	if (n == guess)
		return (1);
	if (n % guess == 0)
		return (0);
	return (_prime_number(n, guess + 1));
}

/**
 * is_prime_number - calls _prime_number
 * @n: number to check
 *
 * Return: 1 if prime and 0 if not
 *
 */

int is_prime_number(int n)
{
	int guess;

	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	guess = 2;
	return (_prime_number(n, guess));
}
