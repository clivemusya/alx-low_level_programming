#include "function_pointers.h"

/**
 * array_iterator - given as a parameter on each element of an array
 * @array: array
 * @size: size
 * @action: func
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t local_size;

	if (array && action)
	{
		local_size = 0;
		while (local_size < size)
		{
			action(array[local_size]);
			local_size++;
		}
	}
}
