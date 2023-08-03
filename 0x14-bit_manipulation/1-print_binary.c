#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print its binary.
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (size - 1);
	int started = 0;

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!started)
		_putchar('0');
}
