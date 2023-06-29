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
	int destlen = 0, srclen = 0;

	while (*(dest + destlen) != '\0')
		destlen++;

	while (srclen >= 0)
	{
		*(dest + destlen) = *(src + srclen);
		if (*(src + srclen) == '\0')
			break;
		srclen++;
		destlen++;
	}

	return (dest);
}
