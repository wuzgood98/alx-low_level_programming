#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to reverse.
 * @n: number of elements the array.
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int end = n - 1, start = 0;

	while (start < end)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
