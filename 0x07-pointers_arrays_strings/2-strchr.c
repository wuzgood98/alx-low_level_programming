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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
