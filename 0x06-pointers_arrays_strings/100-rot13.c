#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: char
 */
char *rot13(char *s)
{
	int i, j;
	char input[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char output[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (input[j] == *(s + i))
			{
				*(s + i) = output[j];
				break;
			}
		}
	}
	return (s);
}
