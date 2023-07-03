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

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
