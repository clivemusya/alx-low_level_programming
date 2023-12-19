#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: character
 *
 * Return: 1 lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
