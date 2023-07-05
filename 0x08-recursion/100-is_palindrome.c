#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * palindrome_helper - checks if a string is a palindrome
 * @s: string to be checked
 * @start: start of string
 * @end: end of the string
 *
 * Return: 1 if s is a palindrome, otherwise 0.
 */

int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome, otherwise 0.
 */

int is_palindrome(char *s)
{
	int length = _strlen(s), start = 0;

	if (!(*s))
		return (1);

	return (palindrome_helper(s, start, length - 1));
}
