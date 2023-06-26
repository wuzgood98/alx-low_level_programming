#include "main.h"

/**
 * puts_half - prints half of a sring
 * @str: string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int n, length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
			break;

		length++;
	}

	if (length % 2 == 0)
		n = (length - 1) / 2;
	else
		n = length / 2;

	for (n++; n < length; n++)
		_putchar(str[n]);
	_putchar('\n');
}
