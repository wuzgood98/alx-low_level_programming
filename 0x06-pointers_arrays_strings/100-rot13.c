#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i = 0, j;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_chars[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabets[j])
			{
				str[i] = rot13_chars[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
