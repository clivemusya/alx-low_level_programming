#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: char pointer
 * @b: char
 * @n: int
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
