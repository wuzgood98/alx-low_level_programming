#include "main.h"

/**
 * puts2 - prints every other character
 *
 * @str: char to print
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
		{
			_putchar('\n');
			break;
		}

		if (str[length] % 2 != 0)
			continue;

		_putchar(length);
		length++;
	}
}
