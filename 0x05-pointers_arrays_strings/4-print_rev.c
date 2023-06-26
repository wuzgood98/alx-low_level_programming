#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to reverse in
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
