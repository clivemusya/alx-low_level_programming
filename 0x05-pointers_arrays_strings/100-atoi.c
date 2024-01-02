#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: ptr
 *
 * Return: int
 */

int _atoi(char *s)
{
	int n = 0;
	unsigned int b = 0;
	int min = 1;
	int c = 0;

	while (s[n])
	{
		if (s[n] == 45)
		{
			min = min * -1;
		}

		while (s[n] >= 48 && s[n] <= 57)
		{
			c = 1;
			b = (b * 10) + (s[n] - '0');
			n++;
		}

		if (c == 1)
		{
			break;
		}

		n++;
	}

	b = b * min;
	return (b);
}
