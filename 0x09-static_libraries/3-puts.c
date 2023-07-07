#include "main.h"

/**
 * _puts - prints a string to stdout.
 * @str: char to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int char_count = 0;

	while (char_count >= 0)
	{
		if (str[char_count] == '\0')
		{
			_putchar('\n');
			break;
		}

		_putchar(str[char_count]);
		char_count++;
	}
}
