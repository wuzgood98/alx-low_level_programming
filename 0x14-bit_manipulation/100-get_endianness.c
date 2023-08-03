#include "main.h"

/**
 * get_endianness - checks the endianness of a system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int test_value = 1;
	char *byte_ptr = (char *)&test_value;

	return ((int)(*byte_ptr));
}
