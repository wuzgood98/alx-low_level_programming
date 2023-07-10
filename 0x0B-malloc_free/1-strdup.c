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
 * _strdup - a pointer to the newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: parameter as string.
 *
 * Return: NULL is str is NULL or pointer to the newly allocated memory
 */

char *_strdup(char *str)
{
	char *new_str;
	int i = 0, length;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);
	new_str = malloc(sizeof(str) * length);

	if (new_str == NULL)
		return (NULL);

	while (i < length)
	{
		new_str[i] = str[i];
		i++;
	}

	new_str[length] = '\0';

	return (new_str);
}
