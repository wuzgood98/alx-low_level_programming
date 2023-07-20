#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments.
 *
 * Return: 0 if n == 0, otherwise the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int index;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	while (index < n)
	{
		sum += va_arg(list, int);
		index++;
	}

	va_end(list);

	return (sum);
}
