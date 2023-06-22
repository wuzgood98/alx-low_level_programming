#include "main.h"

/**
 * print_numbers - Prints numbers from 0 thru 9
 *
 * Return: return nothing.
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
