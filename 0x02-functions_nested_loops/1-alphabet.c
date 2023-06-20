#include "main.h"
/**
 * print_alphabet - Print the alphabet in lowercase,
 * followed by a new line
 *
 * Return: always return 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
