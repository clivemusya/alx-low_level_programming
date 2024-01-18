#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 *
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
