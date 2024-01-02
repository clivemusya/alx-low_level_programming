#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: char
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	do {
		i++;
	} while (*s++);
	return (i);
}
