#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string buffer
 * @accept: bytes to be measured
 *
 * Return: number of bytes in the initial segment
 * of s which consist of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}
