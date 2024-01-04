#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: char 1
 * @dest: char 2
 * @n: int
 *
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
