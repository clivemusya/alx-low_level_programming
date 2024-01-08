#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer char
 * @accept: char pointer
 *
 * Return: Pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		for (; *s; s++)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
				{
					return (s);
				}
			}
		}
	return (NULL);
}
