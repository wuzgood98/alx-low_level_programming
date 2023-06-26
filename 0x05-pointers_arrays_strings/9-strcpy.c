#include "main.h"

/**
 * *_strcpy - copies value from a variable to the other
 * @dest: variable to copy to
 * @src: variable to copy from
 *
 * Return: value copied
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (length >= 0)
	{
		*(dest + length) = *(src + length);
		if (*(src + length) == '\0')
			break;
		length++;
	}
	return (dest);
}
