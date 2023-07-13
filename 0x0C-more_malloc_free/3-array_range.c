#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum range of the array.
 * @max: maximum range of the array.
 *
 * Return: NULL if malloc fails, or
 * NULL if min > max, otherwise the pointer to the
 * newly created array.
 */

int *array_range(int min, int max)
{
	int *new_array, i = min, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	new_array = malloc(sizeof(int) * size);

	if (new_array == NULL)
		return (NULL);

	while (i < size)
	{
		new_array[i] = i;
		i++;
	}

	return (new_array);
}
