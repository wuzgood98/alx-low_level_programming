#include "main.h"

/**
 * print_chessboard - prints a chessboard.
 * @a: chessboard to be printed.
 *
 * Return: nothing.
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j = 0;

	while (a[i][7])
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
