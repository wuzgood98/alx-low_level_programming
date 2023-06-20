#include "main.h"
/**
 * _islower - Check for lowercase character
 *
 * Return: return 1 if param is lower otherwise return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
