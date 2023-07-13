#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size).
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block.
 *
 * Return: ptr if new_size == old_size, or NULL if new_size == 0 and
 * ptr != NULL, otherwise ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr, *new_ptr_char;
	unsigned int copy_size, i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	old_ptr = (char *)ptr;
	new_ptr_char = (char *)new_ptr;

	copy_size = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < copy_size; i++)
		new_ptr_char[i] = old_ptr[i];

	free(ptr);

	return (new_ptr);
}
