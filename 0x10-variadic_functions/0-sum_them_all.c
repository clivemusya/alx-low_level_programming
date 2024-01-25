#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: Parameters
 *
 * Return: 0 on success
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j;
	va_list list;

	va_start(list, n);

	j = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		j += va_arg(list, int);
	}

	va_end(list);

	return (j);
}
