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
	int count = 0;

	while (*(s + count) != '\0')
		count++;

	return (count);
}
