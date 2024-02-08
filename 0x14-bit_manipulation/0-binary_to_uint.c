#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal;

	decimal = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		decimal <<= 1;
		if (b[i] == '1')
			decimal = decimal + 1;
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (decimal);
}
