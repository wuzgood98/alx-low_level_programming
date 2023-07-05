#include "main.h"

/**
 * _pow_recursion - returns the values of x raised
 * to the power of y
 * @x: base number
 * @y: exponent
 *
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	/* Base case: if y is 0, return 1 */
	if (y == 0)
		return (1);

	/* If y is negative, return -1 */
	if (y < 0)
		return (-1);

	/* Recursive case: multiply x by _pow_recursion(x, y - 1) */
	return (x * _pow_recursion(x, y - 1));
}
