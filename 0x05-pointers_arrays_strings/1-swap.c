#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer as a pointer
 * @b: second integer as a pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int ay = *a;

	*a = *b;
	*b = ay;
}
