#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: character to convert
 *
 * Return: the value in int of the
 * string converted
 */

int _atoi(char *s)
{
	int operation = 1;
	unsigned int value = 0;

	do {
		if (*s == '-')
			operation *= -1;
		else if (*s >= '0' && *s <= '9')
			value = (value * 10) + (*s - '0');
		else if (value > 0)
			break;
	} while (*s++);
	return (value * operation);
}
