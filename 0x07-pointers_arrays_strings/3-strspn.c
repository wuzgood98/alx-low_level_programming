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
	unsigned int bytes = 0, i = 0, j = 0;

	while (s[i] != '\0')
	{
		for (; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (bytes);
			}
		}
		i++;
	}
	return (bytes);
}
