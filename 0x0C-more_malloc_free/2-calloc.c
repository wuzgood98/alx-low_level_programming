#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: array to allocate memory for.
 * @size: size of elements in the array nmemb.
 *
 * Return: a pointer to the memory allocated.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *aloc;
	int i, size_to_aloc = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	aloc = malloc(size_to_aloc);

	if (aloc == NULL)
		return (NULL);

	while (i < size_to_aloc)
	{
		aloc[i] = 0;
		i++;
	}

	return (aloc);
}
