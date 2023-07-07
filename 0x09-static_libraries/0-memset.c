#include "main.h"

/**
 * _memset - fills memory with constant type
 * @s: memory pointer
 * @n: bytes of memory pointed by s
 * @b: constant byte
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
