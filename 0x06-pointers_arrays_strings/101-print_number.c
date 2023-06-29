#include "main.h"

/**
 * print_number - prints an integer
 * @n: value as int to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int res, num, i;

	if (n < 0)
	{
		_putchar(45);
		res = n * -1;
	}
	else
	{
		res = n;
	}

	num =  res;
	i = 1;

	while (num > 9)
	{
		num /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
		_putchar(((res / i) % 10) + 48);
}
