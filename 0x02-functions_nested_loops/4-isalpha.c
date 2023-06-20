#include "main.h"
/**
 * _isalpha - check for alphabetic character
 *
 * @c: character in ASCII
 *
 * Return: return 1 is alpha otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	_putchar('\n');
	return (0);
}
