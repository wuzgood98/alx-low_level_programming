#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: paramer as integer
 *
 * Return: returns the last digit of n
 */
int print_last_digit(int n)
{
	int l_d;
	
	l_d = n % 10;
	if (l_d < 0)
	{
		_putchar(-l_d + 48);
		return (-1);
	}

	_putchar(l_d + 48);
	return (1);
}
