#include "main.h"

/**
* print_most_numbers - prints
*
* Return: void
*/

void print_most_numbers(void)
{
	char charInt;

	for (charInt = '0'; charInt <= '9'; charInt++)
	{
		if (charInt != '2' || charInt != '4')
			_putchar(charInt);
	}

	_putchar('\n');
}
