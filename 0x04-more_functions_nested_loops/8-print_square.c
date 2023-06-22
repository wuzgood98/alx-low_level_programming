#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: size of the square
 *
 * Return: returns nothing.
 */

void print_square(int size)
{
	int vert, hor;

	if (size > 0)
	{
		for (vert = 0; vert < size; vert++)
		{
			for (hor = 0; hor < size; hor++)
			{
				_putchar('#');
			}
			if (vert == (size - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
