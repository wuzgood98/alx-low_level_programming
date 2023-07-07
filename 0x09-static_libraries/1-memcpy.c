#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destionation of the copy
 * @src: source of the copy
 * @n: bytes from the memory area src
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
