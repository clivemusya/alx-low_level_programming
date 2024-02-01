#include "lists.h"

/**
 * _strlen - mimics strlen
 * @s : string character
 * Return: length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
