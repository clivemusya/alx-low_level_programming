#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: divider
 * @n: int
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *a;
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(list, char*);

		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
