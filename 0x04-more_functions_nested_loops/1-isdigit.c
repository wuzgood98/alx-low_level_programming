#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Checks for a digit 0 thru 9
 *
 * @c: param as integer
 *
 * Return: return 1 is c is a number, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
