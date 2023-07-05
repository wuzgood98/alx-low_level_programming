#include "main.h"

/**
 * sqrt_helper - returns the natural root of a number
 * @n: base number
 * @start: start of iterator
 * @end: end of iterator
 *
 * Return: square root or -1
 */

int sqrt_helper(int n, int start, int end)
{
	int mid;

	/* Base case: If the start value exceeds the end value,
	 * the square root is not found
	 */
	if (start > end)
		return (-1);

	/* Find the mid value between the start and end values */
	mid = (start + end) / 2;

	/* Base case: If the square of the mid is equal to n,
	 * return mid as the square root.
	 */
	if ((mid * mid) == n)
		return (mid);

	/* If the square of the mid is greater than n,
	 * search in the lower half
	 */
	if ((mid * mid) > n)
		return sqrt_helper(n, start, mid - 1);
	/* If the sqaure of mid is less than n, search in the upper half */
	else
		return sqrt_helper(n, mid + 1, end);
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
	/* Handle the case of negative input */
	if (n < 0)
		return (-1);

	/*
	 * Call the herlper function to find the square
	 * root within the range of 0 to n
	 */
	return (sqrt_helper(n, 0, n));
}
