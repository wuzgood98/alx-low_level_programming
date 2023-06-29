#include "main.h"

/**
 * *string_toupper - change all lowercase of a string to uppercase
 * @str: string to convert
 *
 * Return: converted character
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}

	return (str);
}
