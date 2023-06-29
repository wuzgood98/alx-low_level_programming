#include "main.h"

/**
 * cap_string - captalize the first letter of all strings
 * @str: string to capitalize
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i = 0, j;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 'a' + 'A';
	i++;

	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 'a' + 'A';
				break;
			}
		}
		i++;
	}
	return (str);
}
