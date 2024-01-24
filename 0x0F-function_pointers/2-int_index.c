#include "function_pointers.h"

/**
  * int_index - searches for an integer.
  * @array: array int
  * @size: size
  * @cmp: func
  *
  * Return: index of the first element
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int local_size = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (local_size < size)
			{
				if (cmp(array[local_size]))
				{
					return (local_size);
				}

				local_size++;
			}
		}
	}

	return (-1);
}
