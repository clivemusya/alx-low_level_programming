#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: int
 * @argv: pointer pointer
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
