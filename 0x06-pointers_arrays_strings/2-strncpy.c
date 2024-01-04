#include "main.h"

/**
 * _strncpy - copies a string
 * @src: char1
 * @dest: char2
 * @n: int
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	do {
		*(dest + i) = '\n';
		i++;
	} while (i < n);
	return (dest);
}
