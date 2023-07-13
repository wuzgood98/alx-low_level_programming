#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string to concatenate.
 * @s2: source string.
 * @n: bytes of s2.
 *
 * Return: point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp_string;
	unsigned int str_len = n, i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		str_len++;
		i++;
	}

	temp_string = malloc(sizeof(char) * (str_len + 1));

	if (temp_string == NULL)
		return (NULL);

	str_len = 0;

	while (s1[i] != '\0')
	{
		temp_string[str_len++] = s1[i];
		i++;
	}

	while (s2[i] != '\0' && i < n)
	{
		temp_string[str_len++] = s2[i];
		i++;
	}

	temp_string[str_len] = '\0';

	return (temp_string);
}
