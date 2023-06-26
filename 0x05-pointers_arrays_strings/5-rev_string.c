#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int strlen = 0, i, i;
	char *revd_str, temp;

	while (strlen >= 0)
	{
		if (s[strlen] == '\0')
			break;
		strlen++;
	}

	revd_str = s;

	for (i = 0; i < strlen - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(revd_str + j);
			*(revd_str + j) = *(revd_str + (j - 1));
			*(revd_str + (j - 1)) = temp;
		}
	}
}
