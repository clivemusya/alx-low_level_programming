#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer
 * @src: pointer char
 * @n: int
 *
 * Return: pointer to .dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
