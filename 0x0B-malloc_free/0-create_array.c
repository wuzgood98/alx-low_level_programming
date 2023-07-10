#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of chars to be created.
 * @c: chars to create.
 *
 * Return: NULL or a pointer to the created char.
 */

char *create_array(unsigned int size, char c)
{
	char *characters;
	unsigned int i;

	if (size == 0)
		return (NULL);

	characters = malloc(sizeof(char) * size);

	if (characters == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		characters[i] = c;

	return (characters);
}
