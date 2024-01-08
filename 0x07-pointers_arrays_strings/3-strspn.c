#include "main.h"

/**
 * _strspn - locates a substring
 * @s: char pointer
 * @accept: pointer char
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, i, j;

	a = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					a++;
			}
		}
		else
		{
			return (a);
		}
	}
	return (a);
}
