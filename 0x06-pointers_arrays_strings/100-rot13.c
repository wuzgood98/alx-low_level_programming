#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		char temp = str[i];

		if ((temp >= 'a' && temp <= 'm') || (temp >= 'A' && temp <= 'M'))
		{
			str[i] = temp + 13;
		}
		else if ((temp >= 'n' && temp <= 'z') || (temp >= 'N' && temp <= 'Z'))
		{
			str[i] = temp - 13;
		}
		i++;
	}
	return (str);
}
