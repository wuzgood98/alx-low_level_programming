#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: main string to find from
 * @needle: substring occurrence to find from haystack
 *
 * Return: the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
				return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
