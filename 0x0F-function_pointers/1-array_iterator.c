#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array.
 * @array: integer array
 * @size: the size of the array.
 * @action: a pointer to the function you need to use.
 *
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (action == NULL || array == NULL)
		return;

	while (index < size)
	{
		action(array[index]);
		index++;
	}
}
