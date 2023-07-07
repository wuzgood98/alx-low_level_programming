#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: charater to check for the length
 *
 * Return: return the length of the char
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}
