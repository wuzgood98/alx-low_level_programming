#include "main.h"

/**
 * sqrt_helper - returns the natural root of a number
 * @n: base number
 * @sqrt: root
 *
 * Return: square root or -1
 */

int sqrt_helper(int n, int sqrt)
{
	if ((sqrt * sqrt) == n)
		return (sqrt);

	if (sqrt == (n / 2))
		return (-1);

	return (sqrt_helper(n, sqrt + 1));
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: base number
 *
 * Return: square root of n or -1 of if n has no
 * natural square root.
 */

int _sqrt_recursion(int n)
{
	int sqrt = 0;
	/* Handle the case of negative input */
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (sqrt_helper(n, sqrt));
}
