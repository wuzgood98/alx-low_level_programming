#include "main.h"
/**
 * print_alphabet_x10 - Print 10 times the alphabet
 * in lowercase, followed by a new line
 *
 * Return: always return 0
 */
void print_alphabet_x10(void)
{
	int f, s;

	for (f = 0; f < 10; f++)
	{
		for (s = 97; s < 123; s++)
		{
			_putchar(s);
		}
	_putchar('\n');
	}
}
