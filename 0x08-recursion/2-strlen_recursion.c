#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: char pointer
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	if (*s)
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
