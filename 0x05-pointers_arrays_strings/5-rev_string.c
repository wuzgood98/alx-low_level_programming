#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int strlen = 0;
	char revd_str;

	while (strlen >= 0)
	{
		if (s[strlen] == '\0')
			break;
		strlen++;
	}

	for (strlen--; strlen >= 0; strlen--)
	{
		revd_str += s[strlen];
		*s = revd_str;
	}
}
