#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: base number
 *
 * Return: square root of n or -1 of if n has no
 * natural square root.
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	/* Base case: if n is 0 or 1, return n */
	if (n == 0 || n == 1)
		return (n);

	/* If n is less than 0, return -1 */
	if (n < 0)
		return (-1);

	/* 
	 * Recursive case: find the square root
	 * by checking from 1 to n/2
	 */
	while (i <= n / 2)
	{
		if (i * i == n)
			return (i);

		if (i * i > n)
			return (-1);
		i++;
	}

	return (_sqrt_recursion(n - 1));
}
