#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory allocation.
 *
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *aloc = malloc(b);

	if (aloc == NULL)
		exit(98);

	return (aloc);
}
