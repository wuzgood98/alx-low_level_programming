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
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
