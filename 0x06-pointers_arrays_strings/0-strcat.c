#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string to be appended
 * @src: source string to append
 *
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0, srclen = 0, i;

	while (destlen >= 0)
	{
		if (dest[destlen] == '\0')
			break;
		destlen++;
	}

	while (srclen >= 0)
	{
		if (src[srclen] == '\0')
			break;
		srclen++;
	}

	for (i = 0; i < srclen; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';

	return (dest);
}
