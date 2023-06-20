#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: parameter as interger
 *
 * Return: always return 0
 */
int print_to_98(int n)
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
	else
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
	return (0);
}
