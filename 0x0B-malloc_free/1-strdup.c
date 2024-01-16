#include "main.h"

/**
 * _strdup - returns a pointer
 * @str: char pointer
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *a;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	a = (char *)malloc((sizeof(char) * len) + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		a[i] = str[i];
	}
	a[len] = '\0';

	return (a);
}
