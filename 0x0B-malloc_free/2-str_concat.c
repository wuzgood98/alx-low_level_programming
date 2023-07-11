#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string.
 * @str: string.
 *
 * Return: length of str.
 */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}

/**
 * str_concat - concatenates two strings.
 * @s1: string to concatenate.
 * @s2: source string.
 *
 * Return: NULL or pointer to the newly allocated space in memory.
 */

char *str_concat(char *s1, char *s2)
{
	int s1_length, s2_length, i, j;
	char *temp_string;

	s1_length = _strlen(s1);
	s2_length = _strlen(s2);

	if (s2 == NULL)
		s2 = "";

	if (s1 == NULL)
		s1 = "";

	temp_string = malloc(sizeof(char) * (s1_length + s2_length + 1));

	if (temp_string == NULL)
	{
		free(temp_string);
		return (NULL);
	}

	for (i = 0; i < s1_length; i++)
		temp_string[i] = s1[i];

	j = s2_length;
	for (s2_length = 0; s2_length <= j; i++, s2_length++)
		temp_string[i] = s2[s2_length];

	return (temp_string);

}
