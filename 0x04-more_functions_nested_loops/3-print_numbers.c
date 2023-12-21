#include "main.h"

/**
* print_numbers - print integers
*
* Return: void
*/

void print_numbers(void)
{
	char charInt;

	for (charInt = '0'; charInt <= '9'; charInt++)
	{
		_putchar(charInt);
	}

	_putchar('\n');
}
