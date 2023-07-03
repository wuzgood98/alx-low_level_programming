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
	int i = 0;

	while (*haystack)
	{
		do {
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		} while (haystack[i] == needle[i]);
		haystack++;
	}
	return ('\0');
}
