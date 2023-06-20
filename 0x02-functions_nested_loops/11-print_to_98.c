#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: parameter as interger
 *
 * Return: returns nothing
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			if (i > 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			if (i < 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
}
