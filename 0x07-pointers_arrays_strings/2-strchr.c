#include "main.h"

/**
 * _strchr - locates a character of string
 * @s: string
 * @c: char to find
 *
 * Return: the first occurence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int index = 0;

	for ( ; *(s + index) != '\0'; index++)
	{
		if (*(s + index) == c)
			return (s + i);
	}

	if (*(s + index) == c)
		return (s + index);
	return (NULL);
}
