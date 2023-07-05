#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 *
 * Return: returns 1 if the strings can be considered
 * identical, otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	/* Base cases */

	/* Both strings reached the end, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* s2 ends with '*', so it can match an empty string */
	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);

	/* One of the strings reached the end, they are not identical */
	if (*s1 == '\0' || *s2 == '\0')
		return (0);

	/* Recursive cases */

	/**
	 * If s2 starts with '*', try matching s1 with
	 * the rest of s2 or skip a character in s1
	 */
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	/**
	 * If the current character are equal,
	 * continue comparing the rest of the strings
	 */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/**
	 * If none of the above conditions matched,
	 * the strings are not identical.
	 */
	return (0);
}
