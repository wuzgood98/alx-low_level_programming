#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: integer arrat input.
 * @size: size of the array.
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Return: the index of the first element for which the
 * cmp function does not return 0, otherwise -1 if no element matches or
 * size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
