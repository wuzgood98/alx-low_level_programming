#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number to convert.
 *
 * Return: the converted, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, bin;
	int index = 0;

	if (!b)
		return (0);

	while (b[index])
		index++;

	for (index--, bin = 1; index >= 0; index--, bin <<= 1)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		if (b[index] & 1)
			num += bin;
	}
	return (num);
}
