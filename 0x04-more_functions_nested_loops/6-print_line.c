#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times the character _ should
 * be printed.
 *
 * Return: always 0.
 */
void print_line(int n)
{
	int idx;

	if (n > 0)
	{
		for (idx = 0; idx < n; idx++)
		{
			_putchar(95);
		}
	}

	_putchar('\n');
}
