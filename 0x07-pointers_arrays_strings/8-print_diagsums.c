#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagnonals of
 * a square matrix of integers.
 * @a: array.
 * @size: size of the array
 *
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum_1 = 0, sum_2 = 0;

	while (i < size)
	{
		sum_1 += a[i * size + i];
		sum_2 += a[i * size + (size - 1 - i)];
		i++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
