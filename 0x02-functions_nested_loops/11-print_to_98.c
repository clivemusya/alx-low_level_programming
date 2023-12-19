#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98
 *
 * @n: input
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n > 98; )
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}

	else
	{
		for (; n < 98; )
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
