#include "main.h"

/**
 * print_chessboard - prints a chessboard.
 * @a: chessboard to be printed.
 *
 * Return: nothing.
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j;

	while (a[i][7])
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		i++;
		_putchar('\n');
	}
}
