#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: return -1 if s1 < s2, 1 if s1 > s2,
 * and 0 if s1 == s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, operation = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			operation = s1[i] - s2[i];
		i++;
	}

	return (operation);
}
