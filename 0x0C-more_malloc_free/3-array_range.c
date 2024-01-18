#include "main.h"

/**
 * *array_range - reallocates a memory block using malloc and free
 * @min: int
 * @max: int
 *
 * Return: If min > max, return NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	i = max - min + 1;
	ptr = malloc(sizeof(int) * i);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; min <= max; j++)
	{
		ptr[j] = min++;
	}

	return (ptr);
}
