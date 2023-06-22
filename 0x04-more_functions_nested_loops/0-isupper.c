#include "main.h"
#include <stdio.h>
/**
 * _isupper - Checks for uppercase character.
 *
 * @c: Character in ASCII.
 *
 * Return: return 1 if c is upper, otherwise 0..
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
