#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: parameter as integer
 *
 * Return: return the absolute value of n
 */
int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}

	return (n * -1);
}
