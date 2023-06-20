#include "main.h"
/**
 * times_table - prints the 9 times table
 * starting with 0.
 *
 * Return: no return
 */
void times_table(void)
{
	int n, i, op;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (n = 1; n < 10; n++)
		{
			op = i * n;
			_putchar(44);
			_putchar(32);
			if (op < 10)
			{
				_putchar(32);
				_putchar(op + 48);
			}
			else
			{
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
