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
	int temp_i = 0, str_length = 0, i;
	char *temp_string;

	if (s2 == NULL)
		s2 = "";

	if (s1 == NULL)
		s1 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		str_length++;

	temp_string = malloc(sizeof(char) * str_length);

	if (temp_string == NULL)
	{
		free(temp_string);
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
		temp_string[temp_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		temp_string[temp_i++] = s2[i];

	return (temp_string);

}
