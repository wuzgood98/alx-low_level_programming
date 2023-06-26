#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to reverse in
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int strlen = 0;
	int i;

	while (strlen >= 0)
	{
		if (s[strlen] == '\0')
			break;
		strlen++;
	}

	for (i = strlen - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
