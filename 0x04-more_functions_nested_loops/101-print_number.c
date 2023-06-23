#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: param as integer
 *
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar(45);
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
