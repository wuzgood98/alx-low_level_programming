#include "main.h"

/**
 * prime_helper - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: number to be checked
 * @divisor: the current divisor to be checked for divisibility.
 *
 * Return: 1 if n is a prime number otherwise 0.
 */
int prime_helper(int n, int divisor)
{
	/* base case */
	if (divisor == 1)
		return (1);

	if ((n % divisor) == 0)
		return (0);

	return (prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: number to be checked
 *
 * Return: 1 if n is a prime number otherwise 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_helper(n, n - 1));
}
