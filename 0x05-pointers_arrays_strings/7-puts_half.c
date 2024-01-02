#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int a, n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	if (n + 1 % 2 != '0')
	{
		a = (n - 1) / 2;
	}
	else
	{
		a = (n / 2);
	}
	a++;

	for (n = a; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
