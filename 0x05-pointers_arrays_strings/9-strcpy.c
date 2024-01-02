#include "main.h"

/**
 * _strcpy - copy the string pointed to by src
 * @dest: char
 * @src: char
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
