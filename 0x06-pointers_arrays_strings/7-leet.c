#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string to encode
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int i = 0, j;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lowercase[j] || str[i] == uppercase[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
