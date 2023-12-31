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

		if (length % 2 == 0)
			_putchar(str[length]);

		length++;
	}
}
