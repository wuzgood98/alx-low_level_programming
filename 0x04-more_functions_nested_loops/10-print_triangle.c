#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int hgt, wdt;

	if (size > 0)
	{
		for (hgt = 1; hgt <= size; hgt++)
		{
			for (wdt = size - hgt; wdt > 0; wdt--)
			{
				_putchar(' ');
			}

			for (wdt = 0; wdt < hgt; wdt++)
			{
				_putchar('#');
			}

			if (hgt == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
