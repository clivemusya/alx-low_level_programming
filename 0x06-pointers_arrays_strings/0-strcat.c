#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest:char1
 * @src:char2
 *
 * Return:char
 */

char *_strcat(char *dest, char *src)
{
	char *string = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (string);
}
