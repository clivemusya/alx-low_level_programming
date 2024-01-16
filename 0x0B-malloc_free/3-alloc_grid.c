#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: int
 * @height: int
 *
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int **a, i, j;
	int shape = width * height;

	if (shape <= 0)
	{
		return (NULL);
	}

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
