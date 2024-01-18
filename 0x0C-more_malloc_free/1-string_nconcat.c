#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: ptr char
 * @s2: ptr char
 * @n: int
 *
 * Return: NULL on fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *ptr;

	if (s1 == NULL)
		i = 0;
	else
	{
		i = 0;
		while (s1[i])
		{
			i++;
		}
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		j = 0;
		while (s2[j])
		{
			j++;
		}
	}
	if (j > n)
		j = n;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	for (k = 0; k < j; k++)
		ptr[k + i] = s2[k];
	ptr[i + j] = '\0';
	return (ptr);
}
