#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number whose bit value is to be checked.
 * @index: the index of the bit to retrieve.
 *
 * Return: the value of the bit at the specified index, or -1
 * if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n & mask) ? 1 : 0);
}
