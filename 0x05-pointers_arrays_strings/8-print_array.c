#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: array
 * @n: number of elements of a
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d",a[idx]);
		if (idx != n - 1)
			printf(", ");
	}
	printf("\n");
}
