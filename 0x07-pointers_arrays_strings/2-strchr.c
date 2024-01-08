#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: char pointer
 * @c: char
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
